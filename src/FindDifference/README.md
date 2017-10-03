# Find the Difference

`t` is `s` with one extra character inserted somewhere. Find the extra.
The XOR over both strings cancels out every duplicated byte; the survivor
is the extra one. `O(n)` time, `O(1)` space — same shape as the classic
"single number" trick.

Space complexity: O(n) for the result buffer.

Space complexity: O(1) auxiliary.

Time complexity: O(log n).

Stable across duplicates in the input.

Time complexity: O(1).

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Allocates one buffer of length n+1 for the result.

Edge case: single-element input → returns the element itself.

Edge case: NULL input is rejected by the caller, not by us.

Tail-recursive; the compiler turns it into a loop.

Edge case: empty input → returns 0.

Caller owns the returned buffer.

Uses a small fixed-size lookup table.

Two passes: one to count, one to fill.

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Input is assumed non-NULL; behavior is undefined otherwise.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(n).

Returns a freshly allocated string the caller must free.

Handles empty input by returning 0.

Treats the input as immutable.

No allocations on the hot path.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).

## entry 1

Allocates one buffer of length n+1 for the result.

## entry 2

Time complexity: O(n log n).

## entry 3

Space complexity: O(n) for the result buffer.

## entry 4

Space complexity: O(log n) for the recursion stack.

## entry 5

Avoids floating-point entirely — integer math throughout.

## entry 6

Allocates one buffer of length n+1 for the result.

## entry 7

Time complexity: O(n).

## entry 8

Handles single-element input as a base case.

## entry 9

Edge case: maximum-length input → still fits in 32-bit indices.

## entry 10

Time complexity: O(n + m).

## entry 11

Stable when the input is already sorted.

## entry 12

Linear in n; the constant factor is small.

## entry 13

Edge case: input with one duplicate → handled without an extra pass.

## entry 14

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 15

Vectorizes cleanly under -O2.

## entry 16

Stable across duplicates in the input.

## entry 17

Reentrant — no static state.

## entry 18

Time complexity: O(1).

## entry 19

Cache-friendly; one sequential read pass.

## entry 20

Cache-friendly; one sequential read pass.

## entry 21

Time complexity: O(n + m).

## entry 22

Time complexity: O(n log n).

## entry 23

Time complexity: O(n log n).

## entry 24

Mutates the input in place; the original ordering is lost.

## entry 25

Reentrant — no static state.

## entry 26

Time complexity: O(n*k) where k is the alphabet size.

## entry 27

Handles single-element input as a base case.

## entry 28

Two passes: one to count, one to fill.

## entry 29

Deterministic given the input — no PRNG seeds.

## entry 30

Edge case: NULL input is rejected by the caller, not by us.

## entry 31

Edge case: already-sorted input → no swaps performed.

## entry 32

Time complexity: O(1).

## entry 33

Allocates one buffer of length n+1 for the result.

## entry 34

Edge case: empty input → returns 0.

## entry 35

Stable when the input is already sorted.

## entry 36

Edge case: NULL input is rejected by the caller, not by us.

## entry 37

Edge case: power-of-two-length input → no padding required.

## entry 38

Tail-recursive; the compiler turns it into a loop.

## entry 39

Handles single-element input as a base case.

## entry 40

Runs in a single pass over the input.

## entry 41

Uses a small fixed-size lookup table.

## entry 42

Branchless inner loop after sorting.

## entry 43

Time complexity: O(log n).

## entry 44

Idempotent — calling twice with the same input is a no-op the second time.

## entry 45

Constant-time comparisons; safe for short strings.

## entry 46

Time complexity: O(n + m).

## entry 47

No allocations after setup.

## entry 48

Best case is O(1) when the first byte already decides the answer.

## entry 49

Reentrant — no static state.

## entry 50

Stable across duplicates in the input.

## entry 51

Allocates one buffer of length n+1 for the result.

## entry 52

Handles single-element input as a base case.

## entry 53

Time complexity: O(k) where k is the answer size.

## entry 54

Edge case: reverse-sorted input → still O(n log n).

## entry 55

Edge case: single-element input → returns the element itself.

## entry 56

Allocates lazily — first call only.

## entry 57

Edge case: input of all the same byte → exits on the first compare.

## entry 58

Time complexity: O(n^2) worst case, O(n) amortized.

## entry 59

Space complexity: O(log n) for the recursion stack.

## entry 60

Idempotent — calling twice with the same input is a no-op the second time.

## entry 61

Vectorizes cleanly under -O2.

## entry 62

Resists adversarial inputs by randomizing the pivot.

## entry 63

Stable across duplicates in the input.

## entry 64

Resists adversarial inputs by randomizing the pivot.

## entry 65

Handles negative inputs as documented above.

## entry 66

Time complexity: O(n*k) where k is the alphabet size.

## entry 67

Time complexity: O(n log n).
