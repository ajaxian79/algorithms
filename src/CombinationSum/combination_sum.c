//
// Created by ajaxian on 05/08/21.
//

#include "combination_sum.h"

#include <stdlib.h>
#include <string.h>

typedef struct {
    int** combos;
    int*  sizes;
    int   count;
    int   cap;
} Result;

static void result_push(Result* r, const int* combo, int len) {
    if (r->count == r->cap) {
        r->cap *= 2;
        r->combos = realloc(r->combos, sizeof(int*) * (size_t)r->cap);
        r->sizes  = realloc(r->sizes,  sizeof(int)  * (size_t)r->cap);
    }
    int* fresh = malloc(sizeof(int) * (size_t)len);
    memcpy(fresh, combo, sizeof(int) * (size_t)len);
    r->combos[r->count] = fresh;
    r->sizes[r->count] = len;
    r->count++;
}

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static void recurse(int* candidates, int n, int start, int target,
                    int* path, int path_len, Result* out) {
    if (target == 0) {
        result_push(out, path, path_len);
        return;
    }
    for (int i = start; i < n; i++) {
        if (candidates[i] > target) break;  // sorted, so all larger fail too
        path[path_len] = candidates[i];
        recurse(candidates, n, i, target - candidates[i], path, path_len + 1, out);
    }
}

int** combination_sum(int* candidates, int n, int target,
                      int* return_count, int** combo_sizes) {
    Result out = {0};
    out.cap = 8;
    out.combos = malloc(sizeof(int*) * (size_t)out.cap);
    out.sizes  = malloc(sizeof(int)  * (size_t)out.cap);

    if (n > 0 && target > 0) {
        qsort(candidates, (size_t)n, sizeof(int), int_compare);
        int* path = malloc(sizeof(int) * (size_t)target);  // upper bound
        recurse(candidates, n, 0, target, path, 0, &out);
        free(path);
    }

    *return_count = out.count;
    *combo_sizes = out.sizes;
    return out.combos;
}
// note 1: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 4: Articulation points: same DFS as bridges, with a slightly different test.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Space complexity: O(n) for the result buffer.
// note 7: Input is assumed non-NULL; behavior is undefined otherwise.
// note 8: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 9: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 10: State compression: bitmask + integer encodes a small subset cheaply.
// note 11: Thread-safe so long as the input is not mutated concurrently.
// note 12: Wavelet tree: range k-th element in O(log Σ) time.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 15: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 16: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
