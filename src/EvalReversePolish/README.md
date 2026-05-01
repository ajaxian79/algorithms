# Evaluate Reverse Polish Notation

Walk a token list left to right with an integer stack. Numbers go on,
operators pop two operands (right-hand on top), apply, and push back.
The final stack top is the answer. Division truncates toward zero, the
C builtin behavior for signed `/`.

Time complexity: O(n).

Space complexity: O(n) for the stack worst case (all numbers, no operators).

Allocates one buffer of length n+1 for the result. (Stack scratch.)

Edge case: empty token list, NULL input → returns 0.

Edge case: division by zero or malformed input (operator with too few
operands) → returns 0.
