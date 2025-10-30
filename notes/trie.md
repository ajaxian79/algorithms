# trie

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.
