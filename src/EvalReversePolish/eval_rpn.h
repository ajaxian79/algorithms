//
// Created by ajaxian on 04/29/26.
//

#ifndef ALGORITHMS_EVAL_RPN_H
#define ALGORITHMS_EVAL_RPN_H

// Evaluate a Reverse Polish Notation expression. `tokens` is an array of
// `n` strings; each is either a signed decimal integer or one of "+", "-",
// "*", "/". Division truncates toward zero. Returns 0 on malformed input
// or empty token list.
long eval_rpn(const char** tokens, int n);

#endif //ALGORITHMS_EVAL_RPN_H
