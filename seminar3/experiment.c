#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <omp.h>

int main(void) {
    bool passed = true;

    printf("Testing all 2^64 combinations of 32-bit x and y...\n");
    

    // Parallelize the outer loop across all CPU cores
    #pragma omp parallel for reduction(&& : passed) schedule(static)
   
    for (int64_t i = 0; i < (1LL << 32); i++) {
        int32_t x = (int32_t)i;
        uint32_t ux = (uint32_t)x;

        for (int64_t j = 0; j < (1LL << 32); j++) {
            int32_t y = (int32_t)j;
            uint32_t uy = (uint32_t)y;

            // Evaluate using unsigned cast to prevent C-level Undefined Behavior (UB)
            // while matching 2's complement binary arithmetic
            uint32_t lhs = (uint32_t)(x * ~y) + (uy * ux);
            uint32_t rhs = (uint32_t)(-x);

            if (lhs != rhs) {
                passed = false;
            }
        }
    }

    

    if (passed) {
        printf("SUCCESS: Expression is TRUE for ALL 2^64 inputs!\n");
    } else {
        printf("FAILED: Counterexample found!\n");
    }

    return 0;
}
