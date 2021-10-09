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
