//
// Created by ajaxian on 05/03/26.
//

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "infix_to_postfix.h"

static int prec(char op) {
    switch (op) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

static int right_assoc(char op) { return op == '^'; }

char* infix_to_postfix(const char* infix) {
    if (!infix) return NULL;

    size_t n = strlen(infix);
    char* out = (char*)malloc(n * 2 + 2);
    char* stack = (char*)malloc(n + 1);
    if (!out || !stack) {
        free(out); free(stack);
        return NULL;
    }

    size_t op = 0, sp = 0;
    int last_was_operand = 0;

    for (size_t i = 0; i < n; i++) {
        char c = infix[i];
        if (isspace((unsigned char)c)) continue;

        if (isdigit((unsigned char)c) || (islower((unsigned char)c) && (i + 1 == n || !isalnum((unsigned char)infix[i + 1])))) {
            if (last_was_operand) { free(out); free(stack); return NULL; }
            if (op > 0) out[op++] = ' ';
            out[op++] = c;
            last_was_operand = 1;
            continue;
        }

        if (c == '(') {
            stack[sp++] = c;
            last_was_operand = 0;
            continue;
        }

        if (c == ')') {
            while (sp > 0 && stack[sp - 1] != '(') {
                if (op > 0) out[op++] = ' ';
                out[op++] = stack[--sp];
            }
            if (sp == 0) { free(out); free(stack); return NULL; }
            sp--; // pop the '('
            last_was_operand = 1;
            continue;
        }

        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            while (sp > 0 && stack[sp - 1] != '(') {
                int top_p = prec(stack[sp - 1]);
                int cur_p = prec(c);
                if (top_p > cur_p || (top_p == cur_p && !right_assoc(c))) {
                    if (op > 0) out[op++] = ' ';
                    out[op++] = stack[--sp];
                } else {
                    break;
                }
            }
            stack[sp++] = c;
            last_was_operand = 0;
            continue;
        }

        free(out); free(stack);
        return NULL;
    }

    while (sp > 0) {
        if (stack[sp - 1] == '(') { free(out); free(stack); return NULL; }
        if (op > 0) out[op++] = ' ';
        out[op++] = stack[--sp];
    }
    out[op] = '\0';
    free(stack);
    return out;
}
