#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main() {
    void *handle = dlopen("./libcollatz.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error loading library: %s\n", dlerror());
        return 1;
    }

    // Load function pointers
    int (*test_collatz_convergence)(int, int, int*) = dlsym(handle, "test_collatz_convergence");
    if (!test_collatz_convergence) {
        fprintf(stderr, "Error loading function: %s\n", dlerror());
        dlclose(handle);
        return 1;
    }

    // Test the function
    int input = 15;
    int max_iter = 1000;
    int steps[1000];

    int steps_count = test_collatz_convergence(input, max_iter, steps);
    if (steps_count > 0) {
        printf("Collatz sequence for %d (converged in %d steps):\n", input, steps_count);
        for (int i = 0; i < steps_count; i++) {
            printf("%d ", steps[i]);
        }
        printf("\n");
    } else {
        printf("Collatz sequence for %d did not converge in %d iterations.\n", input, max_iter);
    }

    // Close the library
    dlclose(handle);
    return 0;
}
