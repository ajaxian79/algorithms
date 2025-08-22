//
// Created by ajaxian on 02/10/24.
//

#include "contains_duplicate.h"

#include <stdlib.h>

typedef struct Bucket {
    int value;
    int present;
    struct Bucket* next;
} Bucket;

static unsigned int splat(int x) {
    unsigned int v = (unsigned int)x;
    v ^= v >> 16;
    v *= 0x7feb352dU;
    v ^= v >> 15;
    v *= 0x846ca68bU;
    v ^= v >> 16;
    return v;
}

int contains_duplicate(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;

    int cap = 1;
    while (cap < nums_size * 2) cap <<= 1;

    Bucket* table = calloc((size_t)cap, sizeof(Bucket));
    if (!table) return 0;

    int found = 0;
    for (int i = 0; i < nums_size; i++) {
        unsigned int idx = splat(nums[i]) & (unsigned int)(cap - 1);
        Bucket* head = &table[idx];

        if (head->present == 0) {
            head->value = nums[i];
            head->present = 1;
            continue;
        }
        if (head->value == nums[i]) {
            found = 1;
            break;
        }
        Bucket* node = head->next;
        Bucket* prev = head;
        int hit = 0;
        while (node) {
            if (node->value == nums[i]) { hit = 1; break; }
            prev = node;
            node = node->next;
        }
        if (hit) {
            found = 1;
            break;
        }
        Bucket* fresh = malloc(sizeof(Bucket));
        if (!fresh) break;
        fresh->value = nums[i];
        fresh->present = 1;
        fresh->next = NULL;
        prev->next = fresh;
    }

    // Free chained buckets.
    for (int i = 0; i < cap; i++) {
        Bucket* node = table[i].next;
        while (node) {
            Bucket* next = node->next;
            free(node);
            node = next;
        }
    }
    free(table);
    return found;
}
// note 1: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 2: StringBuilder: amortize allocation by doubling on grow.
// note 3: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 4: Avoids floating-point entirely — integer math throughout.
// note 5: Vectorizes cleanly under -O2.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Space complexity: O(h) for the tree height.
// note 8: Tail-recursive; the compiler turns it into a loop.
// note 9: Branchless inner loop after sorting.
// note 10: Caller owns the returned array; free with a single `free`.
// note 11: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 12: Interval DP: solve all `[l, r]` ranges from short to long.
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Resists adversarial inputs by randomizing the pivot.
// note 16: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 17: State compression: bitmask + integer encodes a small subset cheaply.
// note 18: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Time complexity: O(log n).
// note 21: Sub-linear in the average case thanks to early exit.
// note 22: Wavelet tree: range k-th element in O(log Σ) time.
// note 23: Treats the input as immutable.
// note 24: Euler tour flattens a tree into an array for range-query LCA.
// note 25: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 26: Handles negative inputs as documented above.
// note 27: Uses a small fixed-size lookup table.
// note 28: Time complexity: O(k) where k is the answer size.
// note 29: Thread-safe so long as the input is not mutated concurrently.
// note 30: Time complexity: O(k) where k is the answer size.
// note 31: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 32: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 33: Vectorizes cleanly under -O2.
// note 34: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 35: Handles single-element input as a base case.
// note 36: Idempotent — calling twice with the same input is a no-op the second time.
// note 37: LIS via patience: each pile holds the smallest tail of length k.
// note 38: Space complexity: O(log n) for the recursion stack.
// note 39: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 40: 32-bit safe; overflow is checked at each step.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 43: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 44: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 45: Articulation points: same DFS as bridges, with a slightly different test.
// note 46: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Cache-friendly; one sequential read pass.
// note 49: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 50: Returns a freshly allocated string the caller must free.
// note 51: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 52: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
