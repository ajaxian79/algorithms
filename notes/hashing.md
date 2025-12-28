# hashing

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.
