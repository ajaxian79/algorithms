//
// Created by ajaxian on 04/29/26.
//

#include <stdlib.h>
#include <string.h>

#include "eval_rpn.h"

static int is_op(const char* s) {
    if (!s || s[0] == '\0' || s[1] != '\0') return 0;
    char c = s[0];
    return c == '+' || c == '-' || c == '*' || c == '/';
}

long eval_rpn(const char** tokens, int n) {
    if (!tokens || n <= 0) return 0;

    long* stack = (long*)malloc(sizeof(long) * (size_t)n);
    if (!stack) return 0;

    int top = 0;
    for (int i = 0; i < n; i++) {
        const char* t = tokens[i];
        if (!t) continue;

        if (is_op(t)) {
            if (top < 2) {
                free(stack);
                return 0;
            }
            long b = stack[--top];
            long a = stack[--top];
            long r = 0;
            switch (t[0]) {
                case '+': r = a + b; break;
                case '-': r = a - b; break;
                case '*': r = a * b; break;
                case '/':
                    if (b == 0) {
                        free(stack);
                        return 0;
                    }
                    r = a / b;
                    break;
            }
            stack[top++] = r;
        } else {
            stack[top++] = strtol(t, NULL, 10);
        }
    }

    long ans = top > 0 ? stack[top - 1] : 0;
    free(stack);
    return ans;
}
