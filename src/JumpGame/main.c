#include <stdio.h>

#include "jump_game.h"

int main(void) {
    int a[] = {2, 3, 1, 1, 4};
    int b[] = {3, 2, 1, 0, 4};
    int c[] = {0};
    printf("%d\n", can_jump(a, 5));
    printf("%d\n", can_jump(b, 5));
    printf("%d\n", can_jump(c, 1));
    return 0;
}
