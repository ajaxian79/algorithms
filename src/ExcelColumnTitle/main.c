#include <stdio.h>
#include <stdlib.h>

#include "excel_column_title.h"

int main(void) {
    int v[] = {1, 26, 27, 28, 701, 703, 2147483647};
    for (int i = 0; i < 7; i++) {
        char* s = excel_column_title(v[i]);
        printf("%d -> %s\n", v[i], s);
        free(s);
    }
    return 0;
}
