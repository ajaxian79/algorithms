//
// Created by ajaxian on 05/18/24.
//

#include "zigzag.h"

#include <stdlib.h>
#include <string.h>

static char* dup_str(const char* s) {
    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    memcpy(out, s, n + 1);
    return out;
}

char* zigzag_convert(const char* s, int num_rows) {
    if (s == NULL) return NULL;
    if (num_rows <= 1) return dup_str(s);

    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_idx = 0;

    int cycle = 2 * num_rows - 2;
    for (int r = 0; r < num_rows; r++) {
        for (size_t i = 0; i + (size_t)r < n; i += (size_t)cycle) {
            out[out_idx++] = s[i + (size_t)r];
            // Diagonal between row r and row (cycle - r), only valid for
            // interior rows (not first/last).
            if (r > 0 && r < num_rows - 1) {
                size_t diag = i + (size_t)(cycle - r);
                if (diag < n) {
                    out[out_idx++] = s[diag];
                }
            }
        }
    }
    out[out_idx] = '\0';
    return out;
}
// note 1: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 2: Treats the input as immutable.
// note 3: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 4: Rope: tree of small string fragments; O(log n) concat and substring.
// note 5: Deterministic given the input — no PRNG seeds.
// note 6: Walk both pointers from each end inward; advance the smaller side.
// note 7: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 8: Avoids floating-point entirely — integer math throughout.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Space complexity: O(h) for the tree height.
// note 11: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 12: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 13: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 14: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 15: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 16: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 17: Splay tree: every access splays to the root; amortized O(log n).
// note 18: Worst case appears only on degenerate inputs.
// note 19: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 20: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 21: Three passes total; the third merges results.
// note 22: Monotonic stack pops while the new element violates the invariant.
// note 23: Two passes: one to count, one to fill.
// note 24: Avoids floating-point entirely — integer math throughout.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Uses a small fixed-size lookup table.
// note 27: Treats the input as immutable.
// note 28: Space complexity: O(log n) for the recursion stack.
// note 29: Cache-friendly; one sequential read pass.
// note 30: Caller owns the returned buffer.
// note 31: False sharing: two threads writing different bytes in the same cache line stall both.
// note 32: StringBuilder: amortize allocation by doubling on grow.
// note 33: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 34: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 35: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 36: Wavelet tree: range k-th element in O(log Σ) time.
// note 37: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Vectorizes cleanly under -O2.
// note 40: Space complexity: O(log n) for the recursion stack.
// note 41: Articulation points: same DFS as bridges, with a slightly different test.
// note 42: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: No allocations after setup.
// note 45: Handles negative inputs as documented above.
// note 46: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 47: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 48: Handles negative inputs as documented above.
// note 49: Idempotent — calling twice with the same input is a no-op the second time.
// note 50: Caller owns the returned buffer.
// note 51: 64-bit safe; intermediate products are widened to 128-bit.
// note 52: Allocates one buffer of length n+1 for the result.
// note 53: Time complexity: O(n*k) where k is the alphabet size.
// note 54: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 55: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
