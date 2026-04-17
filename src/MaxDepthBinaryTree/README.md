# Max Depth Binary Tree

The depth of a binary tree is the longest root-to-leaf path. Trivial
post-order recursion: `1 + max(depth(left), depth(right))`. Empty tree
has depth `0`.

Edge case: single-element input → returns the element itself.
