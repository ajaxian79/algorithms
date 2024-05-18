#include <stdio.h>

#include "excel_column_number.h"

int main(void) {
    const char* cases[] = {"A", "Z", "AA", "AB", "ZY", "AAA", "FXSHRXW"};
    for (int i = 0; i < 7; i++) {
        printf("%s -> %d\n", cases[i], excel_column_number(cases[i]));
    }
    return 0;
}
