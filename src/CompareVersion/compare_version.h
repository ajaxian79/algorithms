//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_COMPARE_VERSION_H
#define ALGORITHMS_COMPARE_VERSION_H

// Compare two version strings ("1.01", "1.001"). Returns -1, 0, or 1.
// Treats missing components as 0 ("1.0" == "1").
int compare_version(const char* a, const char* b);

#endif //ALGORITHMS_COMPARE_VERSION_H
