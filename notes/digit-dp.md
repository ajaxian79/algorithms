# digit-dp

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 9

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 10

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 21

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 27

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.
