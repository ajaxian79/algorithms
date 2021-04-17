#include <stdio.h>
#include <string.h>

#include "num_islands.h"

int main(void) {
    char a[4 * 5] = {
        '1','1','1','1','0',
        '1','1','0','1','0',
        '1','1','0','0','0',
        '0','0','0','0','0',
    };
    printf("%d\n", num_islands(a, 4, 5));

    char b[4 * 5] = {
        '1','1','0','0','0',
        '1','1','0','0','0',
        '0','0','1','0','0',
        '0','0','0','1','1',
    };
    printf("%d\n", num_islands(b, 4, 5));
    return 0;
}
