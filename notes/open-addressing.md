# open-addressing

## entry 1

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
