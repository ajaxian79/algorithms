# Coin Change

Fewest coins to make `amount` from a multiset of denominations with
unbounded supply. Bottom-up DP: `dp[a] = 1 + min over c in coins of
dp[a - c]`, with a sentinel for "unreachable". Reduces to a single pass
over `amount` with an inner pass over coins.

Time complexity: O(amount * m) where m is the number of denominations.

Space complexity: O(amount) for the DP table.

Allocates one buffer of length n+1 for the result.

Edge case: amount == 0 → returns 0 without touching the table.

Edge case: no combination reaches the amount → returns -1.

Unbounded knapsack: capacity inner ascending allows item reuse.
