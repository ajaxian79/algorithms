//
// Created by ajaxian on 05/02/26.
//

#ifndef ALGORITHMS_MY_POW_H
#define ALGORITHMS_MY_POW_H

// Compute x raised to the integer power n. Uses fast (binary) exponentiation
// so the exponent is consumed in O(log |n|) multiplications. For negative n
// the result is 1 / (x^|n|), with INT_MIN handled by widening to long before
// negation. n == 0 returns 1.0 for any x, including 0.0, matching the C
// math-library convention.
double my_pow(double x, int n);

#endif //ALGORITHMS_MY_POW_H
