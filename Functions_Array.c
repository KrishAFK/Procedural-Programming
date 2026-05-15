#include <stdio.h>

// (a) Returns the largest value in the array
int findMax(int arr[], int size) {
    int max = arr[0]; // Start by assuming the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// (b) Returns the average of all elements
// We use double to maintain precision for the average
double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size; 
}

// (c) Returns the count of positive elements (> 0)
int countPositives(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[10];
    int size = 10;

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Largest Value:      %d\n", findMax(numbers, size));
    printf("Average Value:      %.2f\n", findAverage(numbers, size));
    printf("Positive Count:     %d\n", countPositives(numbers, size));

    return 0;
}