# Burst Balloons

Hard interval DP. The natural DP — "which balloon do I burst FIRST in this
range?" — does not decouple, because a first-burst splits the range into
two pieces whose new neighbors depend on what happened on the other side
afterwards. Reverse the perspective: enumerate which balloon is burst
LAST in the open interval `(i, j)`. When `k` is last, every other balloon
in `(i, j)` has already been burst, so when `k` finally pops its
remaining neighbors are exactly the boundary values `a[i]` and `a[j]`.
The two sub-intervals `(i, k)` and `(k, j)` can be solved independently.

Pad the array with sentinel 1s at both ends so out-of-range neighbors
fall out of the recurrence naturally:

```
dp[i][j] = max over k in (i, j) of
           dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]
```

Fill by interval length, ascending, then read the answer at `dp[0][n+1]`.

Time complexity: O(n^3) — three nested loops over interval length, left
endpoint, and split point.

Space complexity: O(n^2) for the table; the padded array adds O(n) on top.

Edge case: empty input or `n <= 0` returns 0.

Edge case: a single balloon returns its value (no neighbors → both are 1).

Edge case: large products are accumulated as `long` so the canonical
LeetCode constraint (`0 <= nums[i] <= 100`, `n <= 300`) cannot overflow.
