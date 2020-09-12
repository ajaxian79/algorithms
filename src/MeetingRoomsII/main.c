#include <stdio.h>

#include "meeting_rooms_ii.h"

int main(void) {
    int a[] = {0, 30, 5, 10, 15, 20};
    int b[] = {7, 10, 2, 4};
    int c[] = {1, 5, 2, 6, 3, 7};
    printf("%d\n", min_meeting_rooms(a, 3));
    printf("%d\n", min_meeting_rooms(b, 2));
    printf("%d\n", min_meeting_rooms(c, 3));
    return 0;
}
