# House Robber

Pick a subset of `nums` to maximize the sum, but no two chosen indices
may be adjacent. Standard 1D DP: at each `i`, either take `nums[i]` and
skip `i-1`, or skip `i` and inherit the previous best. Two rolling
scalars are enough — no allocation needed.

Time complexity: O(n).

Space complexity: O(1) auxiliary.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Treats the input as immutable.

Edge case: empty input → returns 0.

Edge case: single-element input → returns that element if positive, else 0.
