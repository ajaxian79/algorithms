# Min Stack

Stack with `push`, `pop`, `top`, *and* `min`, all in `O(1)`. The trick is
to store, in each frame, the minimum visible *up to that frame*. On push,
the new min is `min(val, previous_min)`. Pop only changes which frame is
on top; the recorded mins remain consistent.

Space complexity: O(1) auxiliary.

Two passes: one to count, one to fill.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n).

Time complexity: O(1).

Handles empty input by returning 0.

Runs in a single pass over the input.

Space complexity: O(n) for the result buffer.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(log n).

Input is assumed non-NULL; behavior is undefined otherwise.

Treats the input as immutable.

Edge case: NULL input is rejected by the caller, not by us.

No allocations on the hot path.

Edge case: all-equal input → linear-time fast path.

Edge case: single-element input → returns the element itself.

Uses a small fixed-size lookup table.

Edge case: reverse-sorted input → still O(n log n).

Caller owns the returned buffer.

Allocates one buffer of length n+1 for the result.

Time complexity: O(n log n).

Stable across duplicates in the input.

Tail-recursive; the compiler turns it into a loop.

## entry 1

Space complexity: O(log n) for the recursion stack.

## entry 2

Runs in a single pass over the input.

## entry 3

Handles empty input by returning 0.

## entry 4

Time complexity: O(k) where k is the answer size.

## entry 5

Constant-time comparisons; safe for short strings.

## entry 6

Edge case: input with a single peak → handled by the first-pass scan.

## entry 7

Time complexity: O(k) where k is the answer size.

## entry 8

Time complexity: O(n*k) where k is the alphabet size.

## entry 9

Vectorizes cleanly under -O2.

## entry 10

Constant-time comparisons; safe for short strings.

## entry 11

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 12

Deterministic given the input — no PRNG seeds.

## entry 13

Uses a 256-entry lookup for the inner step.

## entry 14

Worst case appears only on degenerate inputs.

## entry 15

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 16

Runs in a single pass over the input.

## entry 17

Edge case: alternating pattern → degenerate case for sliding window.

## entry 18

Sub-linear in the average case thanks to early exit.

## entry 19

Edge case: zero-length string → returns the empty result.

## entry 20

Branchless inner loop after sorting.

## entry 21

Handles negative inputs as documented above.

## entry 22

Treats the input as immutable.

## entry 23

No allocations on the hot path.

## entry 24

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 25

No allocations on the hot path.

## entry 26

Idempotent — calling twice with the same input is a no-op the second time.

## entry 27

Edge case: already-sorted input → no swaps performed.

## entry 28

Treats the input as immutable.

## entry 29

Edge case: integer-max input → guarded by the explicit overflow check.

## entry 30

Time complexity: O(n + m).

## entry 31

No allocations on the hot path.

## entry 32

Deterministic given the input — no PRNG seeds.

## entry 33

Linear in n; the constant factor is small.

## entry 34

Time complexity: O(log n).

## entry 35

Caller owns the returned buffer.

## entry 36

Deterministic given the input — no PRNG seeds.

## entry 37

Stable when the input is already sorted.

## entry 38

Edge case: all-equal input → linear-time fast path.

## entry 39

Time complexity: O(n).

## entry 40

Deterministic given the input — no PRNG seeds.

## entry 41

Allocates lazily — first call only.

## entry 42

Space complexity: O(log n) for the recursion stack.

## entry 43

Edge case: single-element input → returns the element itself.

## entry 44

Handles empty input by returning 0.

## entry 45

Time complexity: O(log n).

## entry 46

Reentrant — no static state.

## entry 47

Time complexity: O(n + m).

## entry 48

Vectorizes cleanly under -O2.
