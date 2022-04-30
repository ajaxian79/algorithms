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
// note 60: Space complexity: O(1) auxiliary.
// note 61: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 62: Space complexity: O(1) auxiliary.
// note 63: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 64: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 65: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 66: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 67: Handles empty input by returning 0.
// note 68: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 69: In-place compaction uses two pointers: read advances always, write only on keep.
// note 70: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 71: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 72: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 73: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 74: Splay tree: every access splays to the root; amortized O(log n).
// note 75: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 76: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 77: Time complexity: O(log n).
// note 78: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 79: Wavelet tree: range k-th element in O(log Σ) time.
// note 80: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 81: Worst case appears only on degenerate inputs.
// note 82: Runs in a single pass over the input.
// note 83: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 84: Wavelet tree: range k-th element in O(log Σ) time.
// note 85: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 86: Reentrant — no static state.
// note 87: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 88: Splay tree: every access splays to the root; amortized O(log n).
// note 89: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 90: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 91: Deterministic given the input — no PRNG seeds.
// note 92: Time complexity: O(log n).
// note 93: Constant-time comparisons; safe for short strings.
// note 94: Returns a freshly allocated string the caller must free.
// note 95: Constant-time comparisons; safe for short strings.
// note 96: Handles empty input by returning 0.
// note 97: Endianness matters when serializing multi-byte ints to a file or wire.
// note 98: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 99: Space complexity: O(1) auxiliary.
// note 100: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 101: No allocations after setup.
// note 102: StringBuilder: amortize allocation by doubling on grow.
// note 103: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 104: Wavelet tree: range k-th element in O(log Σ) time.
// note 105: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 106: Space complexity: O(1) auxiliary.
// note 107: Stable across duplicates in the input.
// note 108: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 109: Best case is O(1) when the first byte already decides the answer.
// note 110: StringBuilder pitfall: reuse forces a deep copy on the first read.
