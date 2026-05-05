#include <stdio.h>

#include "reverse_list.h"

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    RLNode* head = rl_from_array(a, 5);
    head = reverse_list(head);

    int out[8];
    int n = rl_to_array(head, out, 8);
    for (int i = 0; i < n; i++) {
        printf("%d%s", out[i], i + 1 == n ? "\n" : " -> ");
    }

    rl_free(head);
    return 0;
}
