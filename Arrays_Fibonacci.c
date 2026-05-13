#include <stdio.h>

int main() {
    // Array of length 40
    // Using long to ensure we have enough space for large values
    long fib_numbers[40];

    // 1. Manually fill the first two numbers
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    // 2. Use a loop to compute the remaining 38 numbers
    // Each element is the sum of the two preceding elements
    for (int i = 2; i < 40; i++) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    // 3. Print the results to verify
    printf("The first 40 Fibonacci numbers are:\n");
    for (int i = 0; i < 40; i++) {
        printf("%ld\n", fib_numbers[i]);
    }

    return 0;
}