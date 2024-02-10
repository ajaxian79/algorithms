//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_FIZZ_BUZZ_H
#define ALGORITHMS_FIZZ_BUZZ_H

// Returns a malloc'd array of n malloc'd strings: "Fizz", "Buzz", "FizzBuzz",
// or the number, for i = 1..n. Caller frees each entry then the outer array.
// *return_size is set to n (or 0 on alloc failure).
char** fizz_buzz(int n, int* return_size);

#endif //ALGORITHMS_FIZZ_BUZZ_H
