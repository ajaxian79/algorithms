# kadane

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
