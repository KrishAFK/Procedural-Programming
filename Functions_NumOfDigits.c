#include <stdio.h>

//Returns the number of digits in an unsigned integer.

int countDigits(unsigned int num) {
    int count = 0;

    // Handle the special case where num is 0
    if (num == 0) {
        return 1;
    }

    while (num > 0) {
        num = num / 10; // Remove the last digit
        count++;        // Increment the counter
    }

    return count;
}

int main() {
    unsigned int number;
    
    printf("Enter an unsigned integer: ");
    if (scanf("%u", &number) == 1) {
        int result = countDigits(number);
        printf("The number %u has %d digits.\n", number, result);
    }

    return 0;
}