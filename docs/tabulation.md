# tabulation

## entry 1

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
