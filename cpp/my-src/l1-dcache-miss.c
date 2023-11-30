#include <stdio.h>

// In this program, we create an array of integers with a size of 10,000 elements. We initialize the array with values from 0 to 9,999, and then we iterate through the array, accessing each element. This access pattern causes cache misses because it is not sequential, and the CPU's L1 data cache is not efficient at handling such access patterns.


#define ARRAY_SIZE 10000

int main()
{
    int array[ARRAY_SIZE];
    int sum = 0;

    // Initialize the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }

    // Access the array in a way that causes cache misses
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += array[i];
    }

    printf("Sum: %d\n", sum);

    return 0;

}