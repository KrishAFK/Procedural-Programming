#include <stdio.h>

int main() 
{
    int numbers[10];
    int max, min;

    // 1. Request user input
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 2. Initialize max and min with the first element
    max = numbers[0];
    min = numbers[0];

    // 3. Traverse the array to find true max and min
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // 4. Output the results
    printf("\n--- Results ---\n");
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}