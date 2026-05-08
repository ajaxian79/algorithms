# Bloom Filter

Compact probabilistic membership test. Maintain a bit array of size `m`
and `k` hash functions. To insert: hash the key `k` times and set those
bits. To query: hash the key `k` times and ask if all those bits are
set. If any bit is zero, the key is definitely absent (no false
negatives). If all are one, the key is probably present, with a false-
positive rate roughly

```
p ≈ (1 - e^(-k * n / m))^k
```

after `n` insertions. The optimal `k` for a target `m` and expected `n`
is `(m / n) * ln 2`, around 7 for the canonical 1% false-positive
configuration.

This implementation derives `k` independent hashes from two FNV-1a
hashes via the Kirsch-Mitzenmacher formula:

```
h_i(x) = h1(x) + i * h2(x)
```

That is functionally indistinguishable from `k` real independent hashes
for filter purposes and avoids paying for `k` separate full hash passes.

Used heavily in storage engines and databases:

- **SSTable index filters** in LevelDB, RocksDB, and Cassandra — skip
  reading on-disk blocks that definitely don't contain a key.
- **Cache-miss rejection** so a request never even reaches the cold
  store.
- **Distributed-system join pruning** so each shard only ships keys
  another shard might own.

Time complexity: O(k) per add and per query.

Space complexity: O(m / 8) bytes for the bit array.

This implementation does not support deletion (a counting Bloom filter
would). Removing a bit could turn a false positive into a false
negative for some other key that hashed to the same bit.
