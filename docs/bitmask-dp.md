# bitmask-dp

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 9

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 10

Greedy by end-time picks the most non-overlapping intervals.

## entry 11

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 16

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 17

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

Articulation points: same DFS as bridges, with a slightly different test.

## entry 19

State compression: bitmask + integer encodes a small subset cheaply.

## entry 20

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 24

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 25

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 28

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 29

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Splay tree: every access splays to the root; amortized O(log n).

## entry 34

LCA via binary lifting: jump up powers of two until depths match, then converge.
