#include <stdio.h>

#include "palindrome_number.h"

int main(void) {
    int values[] = {121, -121, 10, 0, 12321, 1221, 1234};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        printf("%d -> %s\n", values[i], is_palindrome_number(values[i]) ? "yes" : "no");
    }

    return 0;
}
