//
// Created by ajaxian on 05/03/26.
//

#ifndef ALGORITHMS_INFIX_TO_POSTFIX_H
#define ALGORITHMS_INFIX_TO_POSTFIX_H

// Dijkstra's shunting-yard algorithm. Convert an infix arithmetic
// expression into space-separated reverse Polish notation. Handles single
// digit operands 0-9, single-letter variables a-z, the binary operators
// `+`, `-`, `*`, `/`, the right-associative `^` for exponentiation, and
// parentheses. Whitespace in the input is skipped.
//
// Returns a freshly malloc'd null-terminated string the caller must free.
// On malformed input (mismatched parens, etc.) returns NULL.
//
// Time complexity: O(n). Space complexity: O(n) for the output buffer
// plus O(d) for the operator stack where d is the maximum nested depth.
char* infix_to_postfix(const char* infix);

#endif //ALGORITHMS_INFIX_TO_POSTFIX_H
