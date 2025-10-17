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
