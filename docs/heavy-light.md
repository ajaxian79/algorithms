# heavy-light

## entry 1

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 9

Monotonic stack pops while the new element violates the invariant.

## entry 10

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 11

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 25

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 31

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

Splay tree: every access splays to the root; amortized O(log n).

## entry 36

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 43

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 44

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Walk both pointers from each end inward; advance the smaller side.

## entry 52

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Euler tour flattens a tree into an array for range-query LCA.

## entry 55

Heap when you only need top-k; full sort is wasted work.

## entry 56

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
