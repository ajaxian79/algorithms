# Binary Tree Preorder (iterative)

Iterative preorder using an explicit stack. Push the root, then loop: pop,
emit the value, push the right child first then the left so that left
comes off the stack next. Output buffer doubles when full to keep
amortized cost `O(n)`.
