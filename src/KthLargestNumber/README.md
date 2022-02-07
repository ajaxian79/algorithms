# Kth Largest Number

Find the k-th largest element of an array using
[quickselect](https://en.wikipedia.org/wiki/Quickselect). Each iteration
chooses a pivot, partitions, and recurses into only the side that contains
the target index — average `O(n)` time vs. `O(n log n)` for a full sort.

The pivot is chosen randomly to make worst-case `O(n²)` behaviour
arbitrarily unlikely on sorted-or-near-sorted inputs. Lomuto partition
keeps the implementation short.

The function is destructive: the input array is rearranged.

Runs in a single pass over the input.

Space complexity: O(1) auxiliary.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

32-bit safe; overflow is checked at each step.

Stable across duplicates in the input.

Two passes: one to count, one to fill.

No allocations on the hot path.

Time complexity: O(1).

Returns a freshly allocated string the caller must free.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Uses a small fixed-size lookup table.

Allocates one buffer of length n+1 for the result.

Edge case: empty input → returns 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n log n).

Time complexity: O(n).

Caller owns the returned buffer.

Handles negative inputs as documented above.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(log n).

Edge case: single-element input → returns the element itself.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Space complexity: O(n) for the result buffer.

## entry 1

Thread-safe so long as the input is not mutated concurrently.

## entry 2

32-bit safe; overflow is checked at each step.

## entry 3

Mutates the input in place; the original ordering is lost.

## entry 4

Allocates one buffer of length n+1 for the result.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 7

Edge case: empty input → returns 0.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Edge case: empty input → returns 0.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Caller owns the returned array; free with a single `free`.

## entry 12

Cache-friendly; one sequential read pass.

## entry 13

Edge case: input of all the same byte → exits on the first compare.

## entry 14

Allocates one buffer of length n+1 for the result.

## entry 15

Uses a small fixed-size lookup table.

## entry 16

Edge case: input with a single peak → handled by the first-pass scan.

## entry 17

Time complexity: O(log n).

## entry 18

Edge case: input of all the same byte → exits on the first compare.

## entry 19

Space complexity: O(1) auxiliary.

## entry 20

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 21

Two passes: one to count, one to fill.

## entry 22

Space complexity: O(n) for the result buffer.

## entry 23

Best case is O(1) when the first byte already decides the answer.

## entry 24

Edge case: input with one duplicate → handled without an extra pass.

## entry 25

Edge case: input with a single peak → handled by the first-pass scan.

## entry 26

Treats the input as immutable.

## entry 27

Resists adversarial inputs by randomizing the pivot.

## entry 28

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 29

Edge case: all-equal input → linear-time fast path.

## entry 30

Edge case: input of all the same byte → exits on the first compare.

## entry 31

64-bit safe; intermediate products are widened to 128-bit.

## entry 32

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 33

Handles empty input by returning 0.

## entry 34

Edge case: already-sorted input → no swaps performed.

## entry 35

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 36

No allocations after setup.

## entry 37

Edge case: already-sorted input → no swaps performed.

## entry 38

Handles empty input by returning 0.

## entry 39

Caller owns the returned buffer.

## entry 40

Space complexity: O(1) auxiliary.
