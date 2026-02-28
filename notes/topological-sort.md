# topological-sort

- Walk both pointers from each end inward; advance the smaller side.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
