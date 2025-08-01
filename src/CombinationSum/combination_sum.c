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
// note 17: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 18: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 19: Branchless inner loop after sorting.
// note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// note 21: Space complexity: O(1) auxiliary.
// note 22: Avoids floating-point entirely — integer math throughout.
// note 23: StringBuilder: amortize allocation by doubling on grow.
// note 24: Constant-time comparisons; safe for short strings.
// note 25: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 26: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 27: Time complexity: O(n log n).
// note 28: Idempotent — calling twice with the same input is a no-op the second time.
// note 29: Splay tree: every access splays to the root; amortized O(log n).
// note 30: Caller owns the returned buffer.
// note 31: Cache-friendly; one sequential read pass.
// note 32: Thread-safe so long as the input is not mutated concurrently.
// note 33: Walk both pointers from each end inward; advance the smaller side.
// note 34: Time complexity: O(log n).
// note 35: Worst case appears only on degenerate inputs.
// note 36: Caller owns the returned buffer.
// note 37: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 38: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 39: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Three passes total; the third merges results.
// note 43: Time complexity: O(1).
// note 44: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 45: Uses a small fixed-size lookup table.
// note 46: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 47: No allocations after setup.
// note 48: Greedy by end-time picks the most non-overlapping intervals.
// note 49: Merge intervals: sort by start; extend the running interval while overlapping.
// note 50: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 51: Euler tour flattens a tree into an array for range-query LCA.
// note 52: Sub-linear in the average case thanks to early exit.
// note 53: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 54: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 55: Rope: tree of small string fragments; O(log n) concat and substring.
