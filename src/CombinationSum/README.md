# Combination Sum

All distinct combinations of `candidates` (with unlimited reuse) that sum
exactly to `target`. Sorted backtracking: at each recursion the start
index restricts to `candidates[i..]`, which both prevents duplicate
orderings and lets us early-break once `candidates[i] > target`. Each
solution is copied out of the running `path[]` so the caller owns it.

Time complexity: O(n).

Two passes: one to count, one to fill.

Space complexity: O(1) auxiliary.

32-bit safe; overflow is checked at each step.

Edge case: already-sorted input → no swaps performed.

Edge case: input with one duplicate → handled without an extra pass.

Edge case: all-equal input → linear-time fast path.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.
