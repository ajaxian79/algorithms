# wavelet-tree

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 15

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 16

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 17

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 20

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

- Walk both pointers from each end inward; advance the smaller side.

## entry 22

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 23

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 32

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 33

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 34

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 40

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 42

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 43

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 44

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 46

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 47

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 48

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 50

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

- Greedy by end-time picks the most non-overlapping intervals.

## entry 56

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 57

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 58

- Stable sort matters when a secondary key was set in a prior pass.
