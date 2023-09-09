# bridges

## entry 1

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
