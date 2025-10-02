//
// Created by ajaxian on 02/10/24.
//

#include "valid_parens.h"

#include <stdlib.h>
#include <string.h>

int is_valid_parens(const char* s) {
    if (s == NULL) return 1;
    size_t n = strlen(s);
    if (n == 0) return 1;
    if (n % 2 != 0) return 0;

    char* stack = malloc(n);
    if (!stack) return 0;
    size_t top = 0;

    for (size_t i = 0; i < n; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[top++] = c;
        } else {
            if (top == 0) {
                free(stack);
                return 0;
            }
            char open = stack[--top];
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                free(stack);
                return 0;
            }
        }
    }

    int ok = (top == 0) ? 1 : 0;
    free(stack);
    return ok;
}
// note 1: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
