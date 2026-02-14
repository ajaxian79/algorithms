# knapsack-unbounded

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Stable sort matters when a secondary key was set in a prior pass.
