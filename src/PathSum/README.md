# Path Sum

Does any root-to-leaf path sum to `target`? Pure recursion with the
remainder threaded through. The base case is "we are at a leaf" — both
children null, and remaining must be exactly zero.

The empty tree case is `0` (no path exists), which the `root == NULL`
guard covers.

Two passes: one to count, one to fill.
