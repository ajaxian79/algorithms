//
// Created by ajaxian on 05/29/21.
//

#ifndef ALGORITHMS_LRU_CACHE_H
#define ALGORITHMS_LRU_CACHE_H

typedef struct LRUCache LRUCache;

LRUCache* lru_create(int capacity);
void      lru_destroy(LRUCache* c);
int       lru_get(LRUCache* c, int key);   // -1 on miss
void      lru_put(LRUCache* c, int key, int value);

#endif //ALGORITHMS_LRU_CACHE_H
