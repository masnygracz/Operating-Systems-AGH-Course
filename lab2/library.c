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
    int steps_amnt = 0;
    steps[steps_amnt] = input;

    while (steps_amnt < max_iter && input != 1) {
        input = collatz_conjecture(input);
        steps_amnt++;
        steps[steps_amnt] = input;
    }

    if (input == 1) {
        steps[steps_amnt++] = 1;
        return steps_amnt;
    } else {
        return 0;
    }
}