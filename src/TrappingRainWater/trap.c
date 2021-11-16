//
// Created by ajaxian on 10/31/20.
//

#include "trap.h"

int trap(const int* height, int n) {
    if (n < 3) return 0;
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int total = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max) left_max = height[left];
            else total += left_max - height[left];
            left++;
        } else {
            if (height[right] >= right_max) right_max = height[right];
            else total += right_max - height[right];
            right--;
        }
    }
    return total;
}
// note 1: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 2: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// note 5: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 6: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 7: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// note 9: Tail-recursive; the compiler turns it into a loop.
// note 10: 32-bit safe; overflow is checked at each step.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Manacher expands around each center, reusing prior radii via mirror reflection.
