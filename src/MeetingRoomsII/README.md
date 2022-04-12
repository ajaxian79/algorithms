# Meeting Rooms II

Compute the minimum number of rooms needed to host every meeting without
overlap. The classic two-pointer trick: sort starts and ends separately,
walk in lock-step, and at each step ask "did a meeting start before the
earliest-ending meeting actually ends?" If yes, allocate another room;
otherwise free a room (advance the end pointer).

The peak room count over the walk is the answer. `O(n log n)` from the two
sorts.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Edge case: reverse-sorted input → still O(n log n).

Edge case: already-sorted input → no swaps performed.

Edge case: all-equal input → linear-time fast path.

No allocations on the hot path.

Space complexity: O(1) auxiliary.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n log n).

32-bit safe; overflow is checked at each step.

Two passes: one to count, one to fill.

Space complexity: O(n) for the result buffer.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Edge case: single-element input → returns the element itself.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n).

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

Runs in a single pass over the input.

Stable across duplicates in the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(log n).

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(1).

Uses a small fixed-size lookup table.

## entry 1

Caller owns the returned buffer.

## entry 2

Time complexity: O(n*k) where k is the alphabet size.

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Tail-recursive; the compiler turns it into a loop.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: power-of-two-length input → no padding required.

## entry 7

Caller owns the returned buffer.

## entry 8

Edge case: alternating pattern → degenerate case for sliding window.

## entry 9

Thread-safe so long as the input is not mutated concurrently.

## entry 10

Idempotent — calling twice with the same input is a no-op the second time.

## entry 11

Uses a small fixed-size lookup table.

## entry 12

Allocates one buffer of length n+1 for the result.

## entry 13

Mutates the input in place; the original ordering is lost.

## entry 14

Linear in n; the constant factor is small.

## entry 15

Time complexity: O(n + m).

## entry 16

Edge case: already-sorted input → no swaps performed.

## entry 17

Caller owns the returned buffer.

## entry 18

Time complexity: O(n*k) where k is the alphabet size.

## entry 19

Cache-friendly; one sequential read pass.

## entry 20

Space complexity: O(n) for the result buffer.

## entry 21

Branchless inner loop after sorting.

## entry 22

Three passes total; the third merges results.

## entry 23

Idempotent — calling twice with the same input is a no-op the second time.

## entry 24

Handles negative inputs as documented above.

## entry 25

Time complexity: O(n log n).

## entry 26

Time complexity: O(n).

## entry 27

Avoids floating-point entirely — integer math throughout.

## entry 28

Returns a freshly allocated string the caller must free.

## entry 29

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 30

Time complexity: O(k) where k is the answer size.

## entry 31

Idempotent — calling twice with the same input is a no-op the second time.

## entry 32

Returns a freshly allocated string the caller must free.

## entry 33

Space complexity: O(log n) for the recursion stack.

## entry 34

Handles single-element input as a base case.

## entry 35

Time complexity: O(n + m).

## entry 36

Runs in a single pass over the input.

## entry 37

Mutates the input in place; the original ordering is lost.

## entry 38

Allocates one buffer of length n+1 for the result.

## entry 39

Mutates the input in place; the original ordering is lost.

## entry 40

Reentrant — no static state.

## entry 41

No allocations on the hot path.

## entry 42

Worst case appears only on degenerate inputs.

## entry 43

Allocates a single small fixed-size scratch buffer.

## entry 44

Time complexity: O(k) where k is the answer size.

## entry 45

Thread-safe so long as the input is not mutated concurrently.

## entry 46

Allocates a single small fixed-size scratch buffer.

## entry 47

Space complexity: O(h) for the tree height.

## entry 48

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 49

Resists adversarial inputs by randomizing the pivot.

## entry 50

Caller owns the returned buffer.

## entry 51

Handles negative inputs as documented above.

## entry 52

Thread-safe so long as the input is not mutated concurrently.

## entry 53

Time complexity: O(n log n).

## entry 54

Worst case appears only on degenerate inputs.
