# skip-list

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

- Monotonic stack pops while the new element violates the invariant.

## entry 5

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 11

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

- Euler tour flattens a tree into an array for range-query LCA.

## entry 22

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 29

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 32

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 36

- LIS via patience: each pile holds the smallest tail of length k.

## entry 37

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 39

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 42

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 43

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 45

- Walk both pointers from each end inward; advance the smaller side.

## entry 46

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 49

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 50

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 51

- Euler tour flattens a tree into an array for range-query LCA.

## entry 52

- Euler tour flattens a tree into an array for range-query LCA.

## entry 53

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 55

- Monotonic stack pops while the new element violates the invariant.
