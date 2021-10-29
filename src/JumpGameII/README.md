# Jump Game II

Minimum number of jumps to reach the last index, given the same jump
rules as Jump Game I. The greedy linear-time approach: think of jumps as
*levels*, BFS-style. `current_end` is the rightmost index reachable in
the current level; `farthest` is the rightmost reachable in the next.
Whenever we reach `current_end`, we must take a jump; advance to
`farthest`. Stop as soon as the next level reaches the last index.

Edge case: NULL input is rejected by the caller, not by us.

Uses a small fixed-size lookup table.

Stable across duplicates in the input.

Treats the input as immutable.

Allocates one buffer of length n+1 for the result.

Input is assumed non-NULL; behavior is undefined otherwise.

32-bit safe; overflow is checked at each step.

Edge case: single-element input → returns the element itself.

Handles empty input by returning 0.

Space complexity: O(1) auxiliary.

Time complexity: O(1).

No allocations on the hot path.

Tail-recursive; the compiler turns it into a loop.

Time complexity: O(n).

Edge case: reverse-sorted input → still O(n log n).

Two passes: one to count, one to fill.

Caller owns the returned buffer.

Edge case: empty input → returns 0.

Returns a freshly allocated string the caller must free.

Time complexity: O(n log n).

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(log n).

Runs in a single pass over the input.

Edge case: all-equal input → linear-time fast path.

Edge case: already-sorted input → no swaps performed.

Space complexity: O(n) for the result buffer.

Handles negative inputs as documented above.

## entry 1

Edge case: empty input → returns 0.

## entry 2

Edge case: input with a single peak → handled by the first-pass scan.

## entry 3

Time complexity: O(n + m).

## entry 4

Edge case: reverse-sorted input → still O(n log n).

## entry 5

Edge case: all-equal input → linear-time fast path.

## entry 6

Time complexity: O(1).

## entry 7

Space complexity: O(n) for the result buffer.

## entry 8

Tail-recursive; the compiler turns it into a loop.

## entry 9

Sub-linear in the average case thanks to early exit.

## entry 10

Uses a small fixed-size lookup table.

## entry 11

Time complexity: O(n*k) where k is the alphabet size.

## entry 12

Edge case: input with a single peak → handled by the first-pass scan.

## entry 13

Edge case: input with one duplicate → handled without an extra pass.

## entry 14

Uses a 256-entry lookup for the inner step.

## entry 15

Runs in a single pass over the input.

## entry 16

Sub-linear in the average case thanks to early exit.

## entry 17

Time complexity: O(log n).

## entry 18

Handles empty input by returning 0.

## entry 19

Three passes total; the third merges results.

## entry 20

Edge case: integer-min input → guarded by the explicit underflow check.

## entry 21

Linear in n; the constant factor is small.

## entry 22

Mutates the input in place; the original ordering is lost.

## entry 23

Edge case: all-equal input → linear-time fast path.

## entry 24

Treats the input as immutable.

## entry 25

Deterministic given the input — no PRNG seeds.

## entry 26

Edge case: single-element input → returns the element itself.

## entry 27

Input is assumed non-NULL; behavior is undefined otherwise.

## entry 28

Worst case appears only on degenerate inputs.

## entry 29

Handles empty input by returning 0.

## entry 30

Treats the input as immutable.

## entry 31

Uses a small fixed-size lookup table.

## entry 32

Constant-time comparisons; safe for short strings.

## entry 33

Returns a freshly allocated string the caller must free.

## entry 34

Stable when the input is already sorted.

## entry 35

Allocates a single small fixed-size scratch buffer.

## entry 36

Edge case: single-element input → returns the element itself.

## entry 37

Reentrant — no static state.

## entry 38

No allocations on the hot path.

## entry 39

Branchless inner loop after sorting.

## entry 40

Uses a small fixed-size lookup table.

## entry 41

Linear in n; the constant factor is small.

## entry 42

Deterministic given the input — no PRNG seeds.

## entry 43

Edge case: input with no peak → falls through to the default branch.
