# sieve

LIS via patience: each pile holds the smallest tail of length k.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
