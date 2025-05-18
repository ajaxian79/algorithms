//
// Created by ajaxian on 02/06/21.
//

#include "postorder.h"

#include <stdlib.h>
#include <stddef.h>

int* postorder_traversal(PostTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    // Trick: do a "rev-preorder" (root, right, left) into a buffer, then
    // reverse the buffer to get postorder (left, right, root).
    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    PostTreeNode** stack = malloc(sizeof(PostTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;
    stack[top++] = root;

    while (top > 0) {
        PostTreeNode* node = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = node->val;
        if (node->left) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PostTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->left;
        }
        if (node->right) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PostTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->right;
        }
    }
    free(stack);

    // Reverse out in place.
    for (int lo = 0, hi = n - 1; lo < hi; lo++, hi--) {
        int t = out[lo]; out[lo] = out[hi]; out[hi] = t;
    }

    *return_size = n;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Cache-friendly; one sequential read pass.
// note 4: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Deterministic given the input — no PRNG seeds.
// note 7: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 8: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 9: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 10: Handles empty input by returning 0.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 13: Union-Find with path compression amortizes to near-O(1) per op.
// note 14: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 15: Idempotent — calling twice with the same input is a no-op the second time.
// note 16: Treats the input as immutable.
// note 17: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 18: Linear in n; the constant factor is small.
// note 19: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 20: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 21: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 22: Euler tour flattens a tree into an array for range-query LCA.
// note 23: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 24: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 25: Caller owns the returned buffer.
// note 26: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 27: Handles negative inputs as documented above.
// note 28: Time complexity: O(1).
// note 29: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 30: Stable across duplicates in the input.
// note 31: Allocates one buffer of length n+1 for the result.
// note 32: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 33: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 34: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 35: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 36: State compression: bitmask + integer encodes a small subset cheaply.
// note 37: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 38: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 39: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 40: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 41: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 42: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 43: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 44: Space complexity: O(n) for the result buffer.
// note 45: Rope: tree of small string fragments; O(log n) concat and substring.
// note 46: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 47: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 48: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 51: Endianness matters when serializing multi-byte ints to a file or wire.
// note 52: Idempotent — calling twice with the same input is a no-op the second time.
// note 53: Time complexity: O(n).
// note 54: Time complexity: O(k) where k is the answer size.
// note 55: Time complexity: O(n*k) where k is the alphabet size.
// note 56: 32-bit safe; overflow is checked at each step.
// note 57: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 58: Uses a 256-entry lookup for the inner step.
// note 59: LRU cache: doubly-linked list + hash map; O(1) get/put.
