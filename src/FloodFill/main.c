#include <stdio.h>

#include "flood_fill.h"

int main(void) {
    int img[3 * 3] = {1, 1, 1, 1, 1, 0, 1, 0, 1};
    flood_fill(img, 3, 3, 1, 1, 2);
    for (int i = 0; i < 9; i++) printf("%d%s", img[i], (i % 3 == 2) ? "\n" : " ");
    return 0;
}
