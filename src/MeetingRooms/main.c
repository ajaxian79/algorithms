#include <stdio.h>

#include "meeting_rooms.h"

int main(void) {
    int a[] = {0, 30, 5, 10, 15, 20};
    int b[] = {7, 10, 2, 4};
    printf("%d\n", can_attend_meetings(a, 3));
    printf("%d\n", can_attend_meetings(b, 2));
    return 0;
}
