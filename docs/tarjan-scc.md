# tarjan-scc

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

Splay tree: every access splays to the root; amortized O(log n).

## entry 27

Walk both pointers from each end inward; advance the smaller side.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.
