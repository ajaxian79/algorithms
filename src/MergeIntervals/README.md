# Merge Intervals

Merge a list of `[start, end]` intervals so no two in the output overlap.

The classic algorithm: sort by start, then sweep. If the current interval
starts before the most recent merged interval's end, extend that end;
otherwise emit a new interval. `O(n log n)` time, dominated by the sort.

The intervals are laid out flat as `[s0, e0, s1, e1, ...]` so we can sort
them as pairs of `int` with a pair-size comparator.

Input is assumed non-NULL; behavior is undefined otherwise.

Uses a small fixed-size lookup table.

Tail-recursive; the compiler turns it into a loop.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Edge case: single-element input → returns the element itself.

Edge case: already-sorted input → no swaps performed.

Time complexity: O(n).

Time complexity: O(1).

Edge case: empty input → returns 0.

Space complexity: O(n) for the result buffer.

Time complexity: O(n log n).

No allocations on the hot path.

Handles negative inputs as documented above.
