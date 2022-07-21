# bellman-ford

## entry 1

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 8

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 14

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 15

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 27

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 30

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.
