# rope

## entry 1

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 13

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

- StringBuilder: amortize allocation by doubling on grow.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 20

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 32

- Heap when you only need top-k; full sort is wasted work.

## entry 33

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 34

- Euler tour flattens a tree into an array for range-query LCA.

## entry 35

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 36

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 41

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 44

- StringBuilder: amortize allocation by doubling on grow.

## entry 45

- Splay tree: every access splays to the root; amortized O(log n).

## entry 46

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 49

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- StringBuilder: amortize allocation by doubling on grow.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 56

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 64

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Greedy by end-time picks the most non-overlapping intervals.

## entry 67

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 68

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
