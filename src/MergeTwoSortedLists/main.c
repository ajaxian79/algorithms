#include <stdio.h>

#include "merge_two_lists.h"

int main(void) {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6};
    ListNode* la = list_from_array(a, 4);
    ListNode* lb = list_from_array(b, 3);
    ListNode* m = merge_two_lists(la, lb);

    int out[16];
    int n = list_to_array(m, out, 16);
    for (int i = 0; i < n; i++) printf("%d%s", out[i], i + 1 < n ? " " : "\n");

    list_free(m);
    return 0;
}
