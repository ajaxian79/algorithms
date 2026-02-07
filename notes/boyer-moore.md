# boyer-moore

- In-place compaction uses two pointers: read advances always, write only on keep.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
