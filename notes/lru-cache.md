# lru-cache

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 7

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 18

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 24

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 25

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 26

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
