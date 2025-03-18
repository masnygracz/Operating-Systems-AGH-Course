#include <stdio.h>
#include <stdlib.h>
#include "collatz.h"
#ifdef DYNAMIC_LOADING
#include <dlfcn.h>
#endif

#define MAX_ITER 1000

int main() {
#ifdef DYNAMIC_LOADING
    void *handle = dlopen("./lib/libcollatz.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Failed to load library: %s\n", dlerror());
        return 1;
    }
    int (*test_collatz_convergence)(int, int, int*) = dlsym(handle, "test_collatz_convergence");
    if (!test_collatz_convergence) {
        fprintf(stderr, "Failed to load function: %s\n", dlerror());
        return 1;
    }
#endif

    int num;
    int steps[MAX_ITER];

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Invalid input!\n");
        return 1;
    }
    printf("Testing Collatz for %d:\n", num);
    int count = test_collatz_convergence(num, MAX_ITER, steps);
    if (count > 0) {
        printf("Sequence: ");
        for (int j = 0; j < count; j++) {
            printf("%d ", steps[j]);
        }
        printf("\n");
    } else {
        printf("Failed to converge within %d iterations.\n", MAX_ITER);
    }
    return 0;
}