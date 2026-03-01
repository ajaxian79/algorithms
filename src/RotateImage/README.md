# Rotate Image

Rotate an `n × n` image 90 degrees clockwise *in place*. Two-step trick:

1. Transpose across the main diagonal.
2. Reverse each row.

Composing those two operations is exactly a 90° clockwise rotation. Both
steps work directly on the existing buffer with `O(1)` extra memory.

Allocates one buffer of length n+1 for the result.

Edge case: NULL input is rejected by the caller, not by us.

Edge case: already-sorted input → no swaps performed.

Treats the input as immutable.

Handles negative inputs as documented above.

Space complexity: O(n) for the result buffer.
