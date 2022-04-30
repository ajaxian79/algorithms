# tabulation

## entry 1

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 18

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 19

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

State compression: bitmask + integer encodes a small subset cheaply.

## entry 22

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

State compression: bitmask + integer encodes a small subset cheaply.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
