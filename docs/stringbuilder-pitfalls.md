# stringbuilder-pitfalls

## entry 1

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2

StringBuilder: amortize allocation by doubling on grow.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 22

State compression: bitmask + integer encodes a small subset cheaply.

## entry 23

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 24

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 25

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 26

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

Union-Find with path compression amortizes to near-O(1) per op.

## entry 28

StringBuilder: amortize allocation by doubling on grow.

## entry 29

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 30

Splay tree: every access splays to the root; amortized O(log n).

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

LRU cache: doubly-linked list + hash map; O(1) get/put.
