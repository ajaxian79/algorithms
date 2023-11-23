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
