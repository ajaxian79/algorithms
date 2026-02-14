# heap-vs-sort

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.
