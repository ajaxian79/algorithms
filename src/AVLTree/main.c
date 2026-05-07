#include <stdio.h>

#include "avl_tree.h"

int main(void) {
    AVLNode* t = NULL;
    int keys[] = {10, 20, 30, 40, 50, 25, 5, 4, 6};
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        t = avl_insert(t, keys[i]);
    }

    printf("height: %d (n=%zu)\n", avl_height(t), sizeof(keys) / sizeof(keys[0]));

    int out[16];
    int n = avl_inorder(t, out, 16);
    printf("inorder:");
    for (int i = 0; i < n; i++) printf(" %d", out[i]);
    printf("\n");

    printf("contains(25)=%d  contains(99)=%d\n", avl_contains(t, 25), avl_contains(t, 99));

    avl_free(t);
    return 0;
}
