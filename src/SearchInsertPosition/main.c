#include <stdio.h>

#include "search_insert.h"

int main(void) {
    int a[] = {1, 3, 5, 6};
    printf("%d\n", search_insert(a, 4, 5));
    printf("%d\n", search_insert(a, 4, 2));
    printf("%d\n", search_insert(a, 4, 7));
    printf("%d\n", search_insert(a, 4, 0));
    return 0;
}
