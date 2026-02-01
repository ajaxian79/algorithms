# Remove Element

Strip all occurrences of `val` from an array in place, preserving order.
Same read/write pointer pattern as remove-duplicates: write only when the
read element is *not* `val`. The tail past the new length is don't-care.

Edge case: reverse-sorted input → still O(n log n).

32-bit safe; overflow is checked at each step.

Treats the input as immutable.

Time complexity: O(n log n).

Edge case: already-sorted input → no swaps performed.

Runs in a single pass over the input.

Allocates one buffer of length n+1 for the result.
