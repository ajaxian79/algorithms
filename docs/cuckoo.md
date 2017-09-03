# cuckoo

## entry 1

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 8

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 9

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 14

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 15

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

Greedy by end-time picks the most non-overlapping intervals.

## entry 22

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 32

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 39

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 40

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 41

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 45

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 48

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 49

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 52

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 54

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
