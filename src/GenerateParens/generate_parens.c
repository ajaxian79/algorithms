//
// Created by ajaxian on 07/11/20.
//

#include "generate_parens.h"

#include <stdlib.h>
#include <string.h>

// Catalan(n) for n up to ~16: enough for typical inputs.
// We grow dynamically to be safe.
typedef struct {
    char** items;
    int    size;
    int    cap;
} StringList;

static void list_push(StringList* l, const char* s, int len) {
    if (l->size == l->cap) {
        int new_cap = l->cap == 0 ? 16 : l->cap * 2;
        char** fresh = realloc(l->items, sizeof(char*) * (size_t)new_cap);
        if (!fresh) return;
        l->items = fresh;
        l->cap = new_cap;
    }
    char* copy = malloc((size_t)len + 1);
    if (!copy) return;
    memcpy(copy, s, (size_t)len);
    copy[len] = '\0';
    l->items[l->size++] = copy;
}

static void recurse(StringList* l, char* buf, int pos, int total, int open_used, int close_used) {
    if (pos == total) {
        list_push(l, buf, total);
        return;
    }
    int max_pairs = total / 2;
    if (open_used < max_pairs) {
        buf[pos] = '(';
        recurse(l, buf, pos + 1, total, open_used + 1, close_used);
    }
    if (close_used < open_used) {
        buf[pos] = ')';
        recurse(l, buf, pos + 1, total, open_used, close_used + 1);
    }
}

char** generate_parens(int n, int* return_size) {
    if (n <= 0) {
        *return_size = 0;
        return NULL;
    }
    StringList l = {0};
    char* buf = malloc((size_t)(2 * n));
    if (!buf) {
        *return_size = 0;
        return NULL;
    }
    recurse(&l, buf, 0, 2 * n, 0, 0);
    free(buf);
    *return_size = l.size;
    return l.items;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: No allocations on the hot path.
// note 4: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: No allocations after setup.
// note 7: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 8: Time complexity: O(n log n).
// note 9: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 12: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 13: Heavy-light decomposition: each path crosses O(log n) heavy chains.
