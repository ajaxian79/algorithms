#include <stdio.h>

#include "twosum.h"
#include <malloc.h>
#include <stdio.h>

int main() {

    int nums[] = {1,6142,8192,10239};
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, 18431, &return_size);

    printf("[2, 7, 18, -24]\n\nFound [%d, %d]\n", result[0], result[1]);

    free(result);

    return 0;
}
