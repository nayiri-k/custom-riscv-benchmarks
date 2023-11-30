#include <stdio.h>
#include <stdlib.h>

// Creating a C program specifically to cause L2 cache misses can be more challenging, as the behavior is influenced by various factors such as the architecture of your CPU, cache size, and memory hierarchy. However, you can create a program with a non-contiguous memory access pattern to increase the likelihood of L2 cache misses. Here's an example:
// In this program, we allocate an array dynamically using malloc and initialize it with values. Then, we access the array in a non-contiguous pattern by incrementing the index (i) by 2 in each iteration of the loop. This non-contiguous access pattern can lead to L2 cache misses, especially if the array is larger than the L2 cache size.

// Keep in mind that the effectiveness of causing L2 cache misses depends on your specific hardware architecture, and the results may vary. Experiment with different array sizes and access patterns to observe the impact on cache behavior.


#define ARRAY_SIZE 10000

int main() {
    // int* array = (int*)malloc(ARRAY_SIZE * sizeof(int));
    int array[ARRAY_SIZE];
    int sum = 0;

    // Initialize the array with values
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }

    // Access the array with a non-contiguous pattern
    for (int i = 0; i < ARRAY_SIZE; i += 2) {
        sum += array[i];
    }

    // Free allocated memory
    // free(array);

    // Print the result to prevent the compiler from optimizing the loop away
    printf("Sum: %d\n", sum);

    return 0;
}
