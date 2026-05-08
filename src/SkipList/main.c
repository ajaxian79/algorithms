#include <stdio.h>

#include "skip_list.h"

int main(void) {
    SkipList l;
    skiplist_init(&l, 42);

    int keys[] = {17, 3, 25, 9, 14, 100, 5, 8, 22, 11};
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        skiplist_insert(&l, keys[i]);
    }
    printf("size=%d\n", skiplist_size(&l));

    int out[32];
    int n = skiplist_to_array(&l, out, 32);
    printf("ordered:");
    for (int i = 0; i < n; i++) printf(" %d", out[i]);
    printf("\n");

    printf("contains(9)=%d  contains(99)=%d\n",
           skiplist_contains(&l, 9), skiplist_contains(&l, 99));

    skiplist_clear(&l);
    return 0;
}
