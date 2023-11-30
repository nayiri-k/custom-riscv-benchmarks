#include <stdio.h>

#define NUM_ADDS 1000000

int main() {
    double result = 0.0;
    double add_value = 1.23456789;

    for (int i = 0; i < NUM_ADDS; i++) {
        result += add_value;
    }

    printf("Result: %f\n", result);

    return 0;
}