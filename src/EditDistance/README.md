# Edit Distance (Levenshtein)

Minimum number of single-character edits — insertion, deletion, or
substitution — to transform `a` into `b`. Canonical 2D DP.

```
dp[i][j] = dp[i-1][j-1]                          if a[i-1] == b[j-1]
dp[i][j] = 1 + min(dp[i-1][j-1],  // substitute
                   dp[i-1][j],    // delete from a
                   dp[i][j-1])    // insert into a
```

Base row and column are the trivial "delete everything" and "insert
everything" cases, so `dp[0][j] = j` and `dp[i][0] = i`.

Space is rolled down to two rows of length `min(m, n) + 1`. Before the
loop we swap so the shorter string indexes the inner axis, then we walk
row by row, writing the new row from the saved previous one.

Time complexity: O(m * n).

Space complexity: O(min(m, n)). The two-row roll keeps the live working
set tiny.

Edge case: NULL is treated as the empty string. `edit_distance("", x) ==
strlen(x)` for any `x`.
