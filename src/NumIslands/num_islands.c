//
// Created by ajaxian on 04/17/21.
//

#include "num_islands.h"

#include <stdlib.h>
#include <stddef.h>

static void flood(char* grid, int m, int n, int r, int c) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (grid[r * n + c] != '1') return;
    grid[r * n + c] = '0';
    flood(grid, m, n, r + 1, c);
    flood(grid, m, n, r - 1, c);
    flood(grid, m, n, r, c + 1);
    flood(grid, m, n, r, c - 1);
}

int num_islands(char* grid, int m, int n) {
    if (grid == NULL || m <= 0 || n <= 0) return 0;
    int count = 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (grid[r * n + c] == '1') {
                count++;
                flood(grid, m, n, r, c);
            }
        }
    }
    return count;
}
