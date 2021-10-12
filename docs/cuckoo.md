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
