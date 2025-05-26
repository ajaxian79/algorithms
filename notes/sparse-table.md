# sparse-table

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Monotonic stack pops while the new element violates the invariant.

## entry 16

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- StringBuilder: amortize allocation by doubling on grow.

## entry 25

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 29

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 30

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 37

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 43

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 44

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 46

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 47

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 48

- Heap when you only need top-k; full sort is wasted work.

## entry 49

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 50

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 52

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 53

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 55

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 56

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 59

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 60

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Greedy by end-time picks the most non-overlapping intervals.

## entry 63

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 66

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 71

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 75

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 76

- Monotonic stack pops while the new element violates the invariant.

## entry 77

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 78

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 79

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 80

- Euler tour flattens a tree into an array for range-query LCA.

## entry 81

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 87

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 94

- Persistent tree: every update creates a new version sharing unchanged nodes.
