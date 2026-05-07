#include <stdio.h>

#include "dll.h"

int main(void) {
    DLL l;
    dll_init(&l);
    dll_push_back(&l, 1);
    dll_push_back(&l, 2);
    dll_push_back(&l, 3);
    dll_push_front(&l, 0);

    int out[8];
    int n = dll_to_array(&l, out, 8);
    printf("after push:");
    for (int i = 0; i < n; i++) printf(" %d", out[i]);
    printf("\n");

    int ok;
    printf("pop_front: %d\n", dll_pop_front(&l, &ok));
    printf("pop_back:  %d\n", dll_pop_back(&l, &ok));
    printf("size:      %d\n", dll_size(&l));

    dll_remove_first(&l, 2);
    n = dll_to_array(&l, out, 8);
    printf("after remove(2):");
    for (int i = 0; i < n; i++) printf(" %d", out[i]);
    printf("\n");

    dll_clear(&l);
    return 0;
}
