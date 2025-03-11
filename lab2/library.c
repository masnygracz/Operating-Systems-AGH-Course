#include "library.h"

#include <stdio.h>

int collatz_conjecture(int input) {
    if (input%2==0) {
        return input/2;
    } else {
        return input*3+1;
    }
}
int test_collatz_convergence(int input, int max_iter, int *steps) {
    int iter = 0;
    steps[iter++] = input;

    while (iter < max_iter && input != 1) {
        input = collatz_conjecture(input);
        steps[iter++] = input;
    }

    if (input == 1) {
        return iter;
    } else {
        return 0;
    }
}