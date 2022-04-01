# persistent-tree

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

Wavelet tree: range k-th element in O(log Σ) time.

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 9

StringBuilder: amortize allocation by doubling on grow.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Heap when you only need top-k; full sort is wasted work.

## entry 26

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

Stable sort matters when a secondary key was set in a prior pass.
