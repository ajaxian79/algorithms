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
