#include <stdio.h>
#include <math.h>

/**
 * Returns 1 if n is prime, 0 otherwise.
 * (Reused from P8.5)
 */
int prime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    double limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/**
 * Prints primes between min and max and returns the total count.
 */
int generatePrimes(int min, int max) {
    int count = 0;
    
    printf("Prime numbers between %d and %d:\n", min, max);
    
    for (int i = min; i <= max; i++) {
        if (prime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\n"); // Clear line after printing the list
    return count;
}

int main() {
    int min, max;

    printf("Enter the lower limit (min): ");
    scanf("%d", &min);
    printf("Enter the upper limit (max): ");
    scanf("%d", &max);

    int totalFound = generatePrimes(min, max);

    printf("\nTotal primes found: %d\n", totalFound);

    return 0;
}