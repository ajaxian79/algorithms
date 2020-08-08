#include <stdio.h>

#include "rotate_image.h"

int main(void) {
    int a[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate_image(a, 3);
    for (int i = 0; i < 9; i++) {
        printf("%d%s", a[i], (i % 3 == 2) ? "\n" : " ");
    }
    return 0;
}
