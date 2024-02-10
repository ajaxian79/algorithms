#include <stdio.h>

#include "roman_to_int.h"

int main(void) {
    const char* cases[] = {"III", "IV", "IX", "LVIII", "MCMXCIV", "MMXXIV"};
    int n = sizeof(cases) / sizeof(cases[0]);

    for (int i = 0; i < n; i++) {
        printf("%-10s -> %d\n", cases[i], roman_to_int(cases[i]));
    }

    return 0;
}
