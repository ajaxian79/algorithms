# manacher

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
