# interval-dp

## entry 1

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 6

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 7

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 8

- LIS via patience: each pile holds the smallest tail of length k.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- LIS via patience: each pile holds the smallest tail of length k.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 19

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 23

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 24

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 27

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 28

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 29

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 36

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

- Stable sort matters when a secondary key was set in a prior pass.

## entry 39

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- Euler tour flattens a tree into an array for range-query LCA.

## entry 45

- Euler tour flattens a tree into an array for range-query LCA.

## entry 46

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 47

- StringBuilder: amortize allocation by doubling on grow.

## entry 48

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 49

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 54

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 62

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.
