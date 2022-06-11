# articulation-points

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Walk both pointers from each end inward; advance the smaller side.

## entry 33

Walk both pointers from each end inward; advance the smaller side.
