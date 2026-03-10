# Same Tree

Structurally and value-wise compare two binary trees. Recurse pairwise; an
asymmetric null vs. non-null is an immediate mismatch.

Time complexity: O(log n).

Edge case: all-equal input → linear-time fast path.

Returns a freshly allocated string the caller must free.

Space complexity: O(1) auxiliary.
