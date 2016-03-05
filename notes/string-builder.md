# string-builder

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 7

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 23

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 24

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 33

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 34

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 37

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 38

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 41

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 42

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 43

- LIS via patience: each pile holds the smallest tail of length k.

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 49

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 51

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 52

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 55

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 59

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 62

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 63

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 65

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 71

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
