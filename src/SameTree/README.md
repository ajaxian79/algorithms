# Same Tree

Structurally and value-wise compare two binary trees. Recurse pairwise; an
asymmetric null vs. non-null is an immediate mismatch.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.

Caller owns the returned buffer.

Runs in a single pass over the input.

Input is assumed non-NULL; behavior is undefined otherwise.

Handles empty input by returning 0.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: empty input → returns 0.

Stable across duplicates in the input.

Uses a small fixed-size lookup table.

32-bit safe; overflow is checked at each step.

Time complexity: O(n log n).

Handles negative inputs as documented above.

Time complexity: O(n).

Tail-recursive; the compiler turns it into a loop.

Edge case: already-sorted input → no swaps performed.

Edge case: reverse-sorted input → still O(n log n).
