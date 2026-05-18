#include <stdio.h>
#include <math.h>

/**
 * Returns 1 if n is prime, 0 otherwise.
 */
int prime(int n) {
    // 0 and 1 are not prime numbers
    if (n < 2) return 0;
    
    // 2 is the only even prime
    if (n == 2) return 1;
    
    // Eliminate all other even numbers immediately
    if (n % 2 == 0) return 0;

    // Check odd divisors starting from 3 up to sqrt(n)
    double limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }

    return 1; // No divisors found, it's prime
}

int main() {
    int num;

    printf("Enter an integer number to test if it is a prime number: ");
    if (scanf("%d", &num) == 1) {
        if (prime(num)) {
            printf("The number %d is a prime number.\n", num);
        } else {
            printf("The number %d is NOT a prime number.\n", num);
        }
    }

    return 0;
}