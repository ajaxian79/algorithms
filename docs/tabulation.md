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
