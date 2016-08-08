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
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 17: Treats the input as immutable.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 20: Wavelet tree: range k-th element in O(log Σ) time.
// note 21: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 22: False sharing: two threads writing different bytes in the same cache line stall both.
// note 23: Time complexity: O(n + m).
// note 24: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 25: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 28: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 29: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 30: LCA via binary lifting: jump up powers of two until depths match, then converge.
