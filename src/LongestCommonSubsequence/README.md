# Longest Common Subsequence

Length of the longest sequence that appears in both inputs in the same
relative order, but not necessarily contiguous. The textbook 2D DP:

```
dp[i][j] = dp[i-1][j-1] + 1                  if a[i-1] == b[j-1]
dp[i][j] = max(dp[i-1][j], dp[i][j-1])       otherwise
```

The full table reconstructs the actual subsequence, but length alone only
needs the previous and current rows. We swap so the shorter string drives
the inner axis, then roll two rows of length `min(m, n) + 1`.

Time complexity: O(m * n).

Space complexity: O(min(m, n)).

Edge case: NULL input is treated as the empty string. LCS with an empty
string is 0.
