#include <stdio.h>
#include <math.h>

// In this program, we first perform a large number of floating-point divides by repeatedly dividing the result by the operand. Then, we perform a large number of square root operations by repeatedly taking the square root of the result. This will put a significant load on the floating-point unit, especially if NUM_OPERATIONS is set to a large value.


#define NUM_OPERATIONS 1000000

int main() {
    double result = 1.0;
    double operand = 2.0;

    // Perform floating-point divides
    for (int i = 0; i < NUM_OPERATIONS; i++) {
        result /= operand;
    }

    // Perform square roots
    for (int i = 0; i < NUM_OPERATIONS; i++) {
        result = sqrt(result);
    }

    printf("Result: %lf\n", result);

    return 0;
}