# tabulation

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Monotonic stack pops while the new element violates the invariant.

## entry 9

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 22

- Stable sort matters when a secondary key was set in a prior pass.

## entry 23

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 24

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 31

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

- Stable sort matters when a secondary key was set in a prior pass.

## entry 35

- Greedy by end-time picks the most non-overlapping intervals.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.
