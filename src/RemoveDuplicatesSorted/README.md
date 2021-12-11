# Remove Duplicates From Sorted Array

Compact a sorted array in place: each unique value should appear once, in
order, in the prefix; the suffix is don't-care. Use a `read`/`write`
pointer pair, advancing `write` only when the current element differs
from the previous.

32-bit safe; overflow is checked at each step.

Space complexity: O(1) auxiliary.

Handles empty input by returning 0.

Handles negative inputs as documented above.

Returns a freshly allocated string the caller must free.

Time complexity: O(1).

No allocations on the hot path.

Space complexity: O(n) for the result buffer.

Treats the input as immutable.

Stable across duplicates in the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Two passes: one to count, one to fill.

Edge case: empty input → returns 0.

Uses a small fixed-size lookup table.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Edge case: all-equal input → linear-time fast path.

Edge case: input with one duplicate → handled without an extra pass.

Tail-recursive; the compiler turns it into a loop.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Caller owns the returned buffer.

Time complexity: O(log n).

## entry 1

Resists adversarial inputs by randomizing the pivot.

## entry 2

Mutates the input in place; the original ordering is lost.

## entry 3

Edge case: zero-length string → returns the empty result.

## entry 4

Edge case: input with no peak → falls through to the default branch.

## entry 5

Returns a freshly allocated string the caller must free.

## entry 6

Time complexity: O(1).

## entry 7

Edge case: single-element input → returns the element itself.

## entry 8

Time complexity: O(n*k) where k is the alphabet size.

## entry 9

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 10

Edge case: power-of-two-length input → no padding required.

## entry 11

32-bit safe; overflow is checked at each step.

## entry 12

Space complexity: O(h) for the tree height.

## entry 13

Runs in a single pass over the input.

## entry 14

Space complexity: O(log n) for the recursion stack.

## entry 15

Space complexity: O(log n) for the recursion stack.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Edge case: all-equal input → linear-time fast path.

## entry 18

Edge case: input with one duplicate → handled without an extra pass.

## entry 19

Reentrant — no static state.

## entry 20

Edge case: empty input → returns 0.

## entry 21

Edge case: NULL input is rejected by the caller, not by us.

## entry 22

Edge case: empty input → returns 0.

## entry 23

Handles empty input by returning 0.

## entry 24

Avoids floating-point entirely — integer math throughout.

## entry 25

Time complexity: O(n*k) where k is the alphabet size.

## entry 26

Edge case: alternating pattern → degenerate case for sliding window.

## entry 27

Edge case: zero-length string → returns the empty result.

## entry 28

Space complexity: O(h) for the tree height.

## entry 29

Tail-recursive; the compiler turns it into a loop.

## entry 30

No allocations on the hot path.

## entry 31

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 32

Tail-recursive; the compiler turns it into a loop.

## entry 33

Handles negative inputs as documented above.

## entry 34

Best case is O(1) when the first byte already decides the answer.

## entry 35

Edge case: input with no peak → falls through to the default branch.

## entry 36

Best case is O(1) when the first byte already decides the answer.

## entry 37

Handles negative inputs as documented above.

## entry 38

Space complexity: O(h) for the tree height.

## entry 39

Tail-recursive; the compiler turns it into a loop.

## entry 40

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 41

Edge case: empty input → returns 0.

## entry 42

Tail-recursive; the compiler turns it into a loop.

## entry 43

Allocates lazily — first call only.

## entry 44

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 45

Linear in n; the constant factor is small.

## entry 46

Reentrant — no static state.

## entry 47

Time complexity: O(log n).

## entry 48

Edge case: input with no peak → falls through to the default branch.
