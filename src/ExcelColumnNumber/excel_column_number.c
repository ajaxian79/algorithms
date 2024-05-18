//
// Created by ajaxian on 05/18/24.
//

#include "excel_column_number.h"

#include <stddef.h>

int excel_column_number(const char* s) {
    if (s == NULL || *s == '\0') return 0;
    int total = 0;
    for (; *s != '\0'; s++) {
        if (*s < 'A' || *s > 'Z') return 0;
        total = total * 26 + (*s - 'A' + 1);
    }
    return total;
}
