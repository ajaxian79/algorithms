#include <stdio.h>

#include "cycle_list.h"

int main(void) {
    int a[] = {3, 2, 0, -4};
    LLCNode* head = llc_from_array(a, 4);

    printf("acyclic -> %d\n", has_cycle(head));
    llc_make_cycle(head, 1);
    printf("with cycle at 1 -> %d\n", has_cycle(head));

    llc_break_cycle(head);
    printf("broken -> %d\n", has_cycle(head));

    llc_free(head);
    return 0;
}
