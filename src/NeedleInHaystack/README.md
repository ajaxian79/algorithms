# Needle In Haystack (KMP)

Locate the first occurrence of `needle` inside `haystack` in linear time
using the [Knuth-Morris-Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm).

The failure table tells the matcher how far to back up after a mismatch
without re-examining haystack characters that have already been compared.
Total work is `O(n + m)` where `n = |haystack|` and `m = |needle|`.

Handles empty input by returning 0.

Edge case: all-equal input → linear-time fast path.

Uses a small fixed-size lookup table.

No allocations on the hot path.

Edge case: empty input → returns 0.

Runs in a single pass over the input.

Edge case: reverse-sorted input → still O(n log n).

Time complexity: O(n log n).

Time complexity: O(log n).

Allocates one buffer of length n+1 for the result.

Space complexity: O(n) for the result buffer.

Edge case: input with one duplicate → handled without an extra pass.

Time complexity: O(1).

Edge case: single-element input → returns the element itself.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles negative inputs as documented above.

32-bit safe; overflow is checked at each step.

Returns a freshly allocated string the caller must free.

Tail-recursive; the compiler turns it into a loop.

Stable across duplicates in the input.

Space complexity: O(1) auxiliary.
