# persistent-tree

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

- Stable sort matters when a secondary key was set in a prior pass.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 14

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 15

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 16

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 17

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 18

- Monotonic stack pops while the new element violates the invariant.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 23

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 28

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Greedy by end-time picks the most non-overlapping intervals.

## entry 32

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 33

- Euler tour flattens a tree into an array for range-query LCA.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.
