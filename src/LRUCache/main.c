#include <stdio.h>

#include "lru_cache.h"

int main(void) {
    LRUCache* c = lru_create(2);
    lru_put(c, 1, 1);
    lru_put(c, 2, 2);
    printf("%d\n", lru_get(c, 1));   // 1
    lru_put(c, 3, 3);                // evicts key 2
    printf("%d\n", lru_get(c, 2));   // -1
    lru_put(c, 4, 4);                // evicts key 1
    printf("%d\n", lru_get(c, 1));   // -1
    printf("%d\n", lru_get(c, 3));   // 3
    printf("%d\n", lru_get(c, 4));   // 4
    lru_destroy(c);
    return 0;
}
