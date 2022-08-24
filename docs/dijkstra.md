# dijkstra

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 8

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 14

Monotonic stack pops while the new element violates the invariant.

## entry 15

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.
