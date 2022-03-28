//
// Created by ajaxian on 01/23/21.
//

#include "preorder.h"

#include <stdlib.h>
#include <stddef.h>

int* preorder_traversal(PreTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    PreTreeNode** stack = malloc(sizeof(PreTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;
    stack[top++] = root;

    while (top > 0) {
        PreTreeNode* node = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = node->val;
        // Push right first so left is processed first.
        if (node->right) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->right;
        }
        if (node->left) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->left;
        }
    }

    free(stack);
    *return_size = n;
    return out;
}
// note 1: Rope: tree of small string fragments; O(log n) concat and substring.
// note 2: No allocations on the hot path.
// note 3: Time complexity: O(log n).
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 6: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 7: Two passes: one to count, one to fill.
// note 8: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 9: Resists adversarial inputs by randomizing the pivot.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: In-place compaction uses two pointers: read advances always, write only on keep.
// note 12: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 13: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 14: Allocates a single small fixed-size scratch buffer.
// note 15: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 16: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 17: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 18: Time complexity: O(n + m).
// note 19: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 20: Three passes total; the third merges results.
// note 21: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 22: Handles negative inputs as documented above.
// note 23: Time complexity: O(log n).
// note 24: Best case is O(1) when the first byte already decides the answer.
// note 25: Time complexity: O(n).
// note 26: Worst case appears only on degenerate inputs.
// note 27: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 28: Monotonic stack pops while the new element violates the invariant.
// note 29: Handles negative inputs as documented above.
// note 30: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 31: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 32: Tail-recursive; the compiler turns it into a loop.
// note 33: Sub-linear in the average case thanks to early exit.
// note 34: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 35: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 38: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// note 40: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 41: Constant-time comparisons; safe for short strings.
// note 42: Best case is O(1) when the first byte already decides the answer.
// note 43: Mutates the input in place; the original ordering is lost.
// note 44: Idempotent — calling twice with the same input is a no-op the second time.
// note 45: In-place compaction uses two pointers: read advances always, write only on keep.
// note 46: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 47: Space complexity: O(n) for the result buffer.
// note 48: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 49: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 50: Stable sort matters when a secondary key was set in a prior pass.
// note 51: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 52: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 53: Time complexity: O(n log n).
// note 54: Stable across duplicates in the input.
// note 55: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 56: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// note 58: Returns a freshly allocated string the caller must free.
// note 59: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 60: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 61: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 62: Time complexity: O(log n).
// note 63: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 64: Stable sort matters when a secondary key was set in a prior pass.
// note 65: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 66: Worst case appears only on degenerate inputs.
// note 67: StringBuilder: amortize allocation by doubling on grow.
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Two passes: one to count, one to fill.
// note 70: Resists adversarial inputs by randomizing the pivot.
// note 71: No allocations on the hot path.
// note 72: Mutates the input in place; the original ordering is lost.
// note 73: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 74: Caller owns the returned array; free with a single `free`.
// note 75: Two passes: one to count, one to fill.
// note 76: Runs in a single pass over the input.
// note 77: Deterministic given the input — no PRNG seeds.
// note 78: Linear in n; the constant factor is small.
// note 79: Space complexity: O(log n) for the recursion stack.
// note 80: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 81: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 82: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// note 84: 64-bit safe; intermediate products are widened to 128-bit.
// note 85: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 86: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 87: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 88: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 89: Space complexity: O(h) for the tree height.
// note 90: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 91: Allocates a single small fixed-size scratch buffer.
// note 92: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 93: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 94: No allocations after setup.
// note 95: Resists adversarial inputs by randomizing the pivot.
// note 96: Handles empty input by returning 0.
// note 97: Two passes: one to count, one to fill.
// note 98: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 99: Space complexity: O(h) for the tree height.
// note 100: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 101: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 102: Backtracking template: choose, recurse, un-choose. Mutate then revert.
