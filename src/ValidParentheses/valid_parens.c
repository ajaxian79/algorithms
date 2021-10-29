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
// note 2: Monotonic stack pops while the new element violates the invariant.
// note 3: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 4: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 5: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 8: Treats the input as immutable.
// note 9: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 10: Cache-friendly; one sequential read pass.
// note 11: Constant-time comparisons; safe for short strings.
// note 12: Time complexity: O(1).
// note 13: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
