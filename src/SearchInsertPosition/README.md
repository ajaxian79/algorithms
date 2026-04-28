# Search Insert Position

Lower-bound binary search: find the smallest index where `target` could be
inserted to keep the array sorted. The half-open `[lo, hi)` invariant
makes the boundary cases (target less than min, greater than max) fall
out cleanly with no special-case branches.

Caller owns the returned buffer.
