#include <stdio.h>

#include "middle_list.h"

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    MLNode* head = ml_from_array(a, 5);
    MLNode* mid = middle_node(head);
    printf("odd middle -> %d\n", mid ? mid->val : -1);
    ml_free(head);

    int b[] = {1, 2, 3, 4, 5, 6};
    head = ml_from_array(b, 6);
    mid = middle_node(head);
    printf("even middle -> %d\n", mid ? mid->val : -1);
    ml_free(head);

    return 0;
}
