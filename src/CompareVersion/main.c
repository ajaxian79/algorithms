#include <stdio.h>

#include "compare_version.h"

int main(void) {
    printf("%d\n", compare_version("1.01", "1.001"));
    printf("%d\n", compare_version("1.0", "1.0.0"));
    printf("%d\n", compare_version("0.1", "1.1"));
    printf("%d\n", compare_version("1.0.1", "1"));
    return 0;
}
