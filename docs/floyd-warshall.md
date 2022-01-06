# floyd-warshall

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Heap when you only need top-k; full sort is wasted work.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 14

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Stable sort matters when a secondary key was set in a prior pass.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Walk both pointers from each end inward; advance the smaller side.

## entry 30

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 34

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 35

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 36

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
