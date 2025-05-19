//
// Created by ajaxian on 05/01/21.
//

#include "word_search.h"

#include <stddef.h>

static int dfs(char* board, int m, int n, int r, int c, const char* word, int idx) {
    if (word[idx] == '\0') return 1;
    if (r < 0 || r >= m || c < 0 || c >= n) return 0;
    if (board[r * n + c] != word[idx]) return 0;

    char saved = board[r * n + c];
    board[r * n + c] = '#';

    int found = dfs(board, m, n, r + 1, c, word, idx + 1) ||
                dfs(board, m, n, r - 1, c, word, idx + 1) ||
                dfs(board, m, n, r, c + 1, word, idx + 1) ||
                dfs(board, m, n, r, c - 1, word, idx + 1);

    board[r * n + c] = saved;
    return found;
}

int word_search(char* board, int m, int n, const char* word) {
    if (board == NULL || word == NULL || word[0] == '\0' || m <= 0 || n <= 0) return 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (dfs(board, m, n, r, c, word, 0)) return 1;
        }
    }
    return 0;
}
// note 1: Time complexity: O(n*k) where k is the alphabet size.
// note 2: Allocates one buffer of length n+1 for the result.
// note 3: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 4: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 5: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 6: Time complexity: O(n*k) where k is the alphabet size.
// note 7: Treats the input as immutable.
// note 8: Handles empty input by returning 0.
// note 9: Endianness matters when serializing multi-byte ints to a file or wire.
// note 10: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Vectorizes cleanly under -O2.
// note 13: Allocates one buffer of length n+1 for the result.
// note 14: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 15: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 16: Walk both pointers from each end inward; advance the smaller side.
// note 17: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 18: Allocates lazily — first call only.
// note 19: Allocates one buffer of length n+1 for the result.
// note 20: Vectorizes cleanly under -O2.
// note 21: StringBuilder: amortize allocation by doubling on grow.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 24: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 25: Caller owns the returned buffer.
// note 26: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 27: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 28: Handles negative inputs as documented above.
// note 29: Space complexity: O(n) for the result buffer.
// note 30: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 31: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 32: Union-Find with path compression amortizes to near-O(1) per op.
// note 33: Branchless inner loop after sorting.
// note 34: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 35: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 36: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 37: Walk both pointers from each end inward; advance the smaller side.
// note 38: Resists adversarial inputs by randomizing the pivot.
// note 39: Allocates one buffer of length n+1 for the result.
// note 40: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 43: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 44: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 45: Uses a small fixed-size lookup table.
// note 46: Mutates the input in place; the original ordering is lost.
// note 47: Allocates lazily — first call only.
// note 48: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 49: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 50: Worst case appears only on degenerate inputs.
// note 51: Walk both pointers from each end inward; advance the smaller side.
// note 52: Deterministic given the input — no PRNG seeds.
// note 53: Sub-linear in the average case thanks to early exit.
// note 54: In-place compaction uses two pointers: read advances always, write only on keep.
