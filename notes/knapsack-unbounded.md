# knapsack-unbounded

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Stable sort matters when a secondary key was set in a prior pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
