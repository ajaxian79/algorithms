# Infix to Postfix (Shunting Yard)

Dijkstra's shunting-yard algorithm — converts an infix expression to
reverse Polish notation in a single left-to-right pass using one operator
stack.

Operands stream straight to the output. An operator pops everything off
the stack with strictly higher precedence (or equal precedence when the
incoming operator is left-associative), then pushes itself. Open paren
pushes; close paren pops until the matching open. At end-of-input,
everything still on the stack pops out.

Right associativity (here only `^`) is handled by the strict-greater
versus greater-or-equal rule on the precedence comparison.

This is the canonical preprocessor for stack-based expression evaluators
and is the same structure used by many shunting-yard descendants in
compiler frontends.

Time complexity: O(n).

Space complexity: O(n) — one operator stack and a token output buffer.

Edge case: NULL input → NULL output.

Edge case: mismatched parens or two operands in a row → NULL output (no
silent recovery).
