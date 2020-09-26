#include <stdio.h>

#include "jump_game_ii.h"

int main(void) {
    int a[] = {2, 3, 1, 1, 4};
    int b[] = {2, 3, 0, 1, 4};
    int c[] = {1};
    printf("%d\n", jump_min(a, 5));
    printf("%d\n", jump_min(b, 5));
    printf("%d\n", jump_min(c, 1));
    return 0;
}
