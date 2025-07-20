# endianness

## entry 1

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Padding inside a struct can dwarf the actual data; reorder fields by size.
