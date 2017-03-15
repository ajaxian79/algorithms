# lca

## entry 1

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 9

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 10

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 18

- Stable sort matters when a secondary key was set in a prior pass.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 21

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 24

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 25

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 26

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 31

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 33

- Splay tree: every access splays to the root; amortized O(log n).

## entry 34

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 35

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 36

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 37

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 38

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 40

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 41

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 42

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 48

- Greedy by end-time picks the most non-overlapping intervals.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 51

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 52

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 53

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 54

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 55

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 56

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- Tabulation wins when iteration order is obvious and stack depth would blow up.
