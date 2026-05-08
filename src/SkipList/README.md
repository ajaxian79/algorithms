# Skip List

Probabilistic ordered set. Each node carries `level` forward pointers
where `level` is drawn from a geometric distribution: a node has at
least 1 link, and each additional link appears with probability 1/2 of
the previous one. The highest-numbered links form a sparse "express
lane" that lets search step over big chunks of the list before dropping
down to denser levels.

```
4 ──────────────► 25 ──────────► 100
3 ──────► 11 ─► 25 ─► ────► 100
2 ──► 9 ► 11 ► 17 ─► 25 ──► 100
1 ► 3 ► 9 ► 11 ► 14 ► 17 ► 22 ► 25 ► 100
```

Search starts at the highest level on the head sentinel and walks right
while the next key is smaller than the target, dropping down a level
when it overshoots. Insert finds the same path, picks a random level
for the new node, and splices it in across all those levels at once.

Expected depth: O(log n). Expected time for search and insert: O(log n).

Used in storage engines (RocksDB, LevelDB, Redis sorted sets) as the
in-memory ordered structure because the design has two big practical
wins over a balanced BST:

1. No rebalancing rotations. Every insert is local — only the predecessor
   pointers at each level change.
2. Lock-free and concurrent variants are easier to reason about than for
   AVL or red-black trees.

This implementation uses xorshift32 as a small, fast PRNG so the test
suite is reproducible. Level is bounded at SKIPLIST_MAX_LEVEL = 16,
suitable for n up to ~65k entries before the probabilistic depth bound
loosens.
