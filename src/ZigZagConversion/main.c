#include <stdio.h>
#include <stdlib.h>

#include "zigzag.h"

int main(void) {
    char* r;
    r = zigzag_convert("PAYPALISHIRING", 3); printf("%s\n", r); free(r);
    r = zigzag_convert("PAYPALISHIRING", 4); printf("%s\n", r); free(r);
    r = zigzag_convert("A", 1);              printf("%s\n", r); free(r);
    return 0;
}
