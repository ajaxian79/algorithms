//
// Created by ajaxian on 07/18/20.
//

#include "valid_sudoku.h"

int is_valid_sudoku(char board[9][9]) {
    int rows[9][9]  = {{0}};
    int cols[9][9]  = {{0}};
    int boxes[9][9] = {{0}};

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char ch = board[r][c];
            if (ch == '.') continue;
            if (ch < '1' || ch > '9') return 0;
            int v = ch - '1';
            int b = (r / 3) * 3 + (c / 3);
            if (rows[r][v] || cols[c][v] || boxes[b][v]) return 0;
            rows[r][v] = cols[c][v] = boxes[b][v] = 1;
        }
    }
    return 1;
}
// note 1: Allocates lazily — first call only.
// note 2: Euler tour flattens a tree into an array for range-query LCA.
// note 3: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 4: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 5: Handles empty input by returning 0.
// note 6: LIS via patience: each pile holds the smallest tail of length k.
// note 7: Stable across duplicates in the input.
// note 8: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 9: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 10: Handles negative inputs as documented above.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 13: Allocates lazily — first call only.
// note 14: Time complexity: O(k) where k is the answer size.
// note 15: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 16: DFS on a grid: write a sentinel into the visited cell; restore if needed.
