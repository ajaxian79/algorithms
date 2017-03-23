//
// Created by ajaxian on 11/1/22.
//

#include <string.h>

char repeatedCharacter(char* s) {
    int counts[26];

    memset(&counts, 0, sizeof(int)*26);

    for (int index = 0; s[index] != '\0'; index++) {
        char current_letter = s[index];

        counts[current_letter-'a']++;

        if (counts[current_letter-'a'] > 1) {
            return current_letter;
        }
    }

    return '\0';
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Heap when you only need top-k; full sort is wasted work.
// note 3: Stable when the input is already sorted.
// note 4: Best case is O(1) when the first byte already decides the answer.
// note 5: No allocations after setup.
// note 6: Heap when you only need top-k; full sort is wasted work.
// note 7: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 8: Two passes: one to count, one to fill.
// note 9: Merge intervals: sort by start; extend the running interval while overlapping.
// note 10: Walk both pointers from each end inward; advance the smaller side.
// note 11: Avoids floating-point entirely — integer math throughout.
// note 12: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 13: Idempotent — calling twice with the same input is a no-op the second time.
// note 14: Uses a small fixed-size lookup table.
// note 15: Time complexity: O(log n).
// note 16: Time complexity: O(k) where k is the answer size.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 19: Rope: tree of small string fragments; O(log n) concat and substring.
// note 20: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 21: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 22: Union-Find with path compression amortizes to near-O(1) per op.
// note 23: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 24: Caller owns the returned buffer.
// note 25: Reentrant — no static state.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 28: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 29: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 30: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 31: Greedy by end-time picks the most non-overlapping intervals.
