# intervals-merge

LIS via patience: each pile holds the smallest tail of length k.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
