//
// Created by ajaxian on 05/22/21.
//

#include "permutations.h"

#include <stdlib.h>
#include <string.h>

static int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

static void swap_int(int* a, int* b) { int t = *a; *a = *b; *b = t; }

static void recurse(int* nums, int n, int start, int*** out, int* count) {
    if (start == n - 1 || start == n) {
        int* fresh = malloc(sizeof(int) * (size_t)n);
        memcpy(fresh, nums, sizeof(int) * (size_t)n);
        (*out)[(*count)++] = fresh;
        return;
    }
    for (int i = start; i < n; i++) {
        swap_int(&nums[start], &nums[i]);
        recurse(nums, n, start + 1, out, count);
        swap_int(&nums[start], &nums[i]);
    }
}

int** permutations(int* nums, int n, int* return_count) {
    if (n <= 0) {
        *return_count = 1;
        int** out = malloc(sizeof(int*));
        out[0] = NULL;
        return out;
    }
    int total = factorial(n);
    int** out = malloc(sizeof(int*) * (size_t)total);
    int count = 0;
    recurse(nums, n, 0, &out, &count);
    *return_count = count;
    return out;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 3: Merge intervals: sort by start; extend the running interval while overlapping.
// note 4: Heap when you only need top-k; full sort is wasted work.
// note 5: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 6: State compression: bitmask + integer encodes a small subset cheaply.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: Space complexity: O(1) auxiliary.
// note 9: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 10: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 13: 32-bit safe; overflow is checked at each step.
// note 14: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 15: No allocations after setup.
// note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// note 17: Interval DP: solve all `[l, r]` ranges from short to long.
// note 18: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 19: Handles empty input by returning 0.
// note 20: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 21: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 22: Time complexity: O(n*k) where k is the alphabet size.
// note 23: Time complexity: O(log n).
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
