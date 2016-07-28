# treap

## entry 1

- Walk both pointers from each end inward; advance the smaller side.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 9

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 15

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Monotonic stack pops while the new element violates the invariant.

## entry 23

- Greedy by end-time picks the most non-overlapping intervals.

## entry 24

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 25

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 26

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 29

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 32

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 33

- Stable sort matters when a secondary key was set in a prior pass.

## entry 34

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 37

- Monotonic stack pops while the new element violates the invariant.

## entry 38

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 42

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 43

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 44

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 45

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 46

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 47

- Walk both pointers from each end inward; advance the smaller side.

## entry 48

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 49

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 51

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 52

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

- Monotonic stack pops while the new element violates the invariant.

## entry 56

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 57

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 60

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 61

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 62

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 63

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 64

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 67

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 68

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 69

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

- Endianness matters when serializing multi-byte ints to a file or wire.
