# Binary Tree Inorder (iterative)

Walk left-spines onto the stack, emit when popped, then descend into the
right subtree. The combination of the inner "push left until null" loop
and the outer "while stack non-empty or curr non-null" gives a clean
iterative inorder.
