#include <stdio.h>

int main() {
    // Define maximum size as 100 per instructions
    double vector1[100], vector2[100];
    int n;
    double scalar_product = 0.0;

    // 1. Get vector length from user
    printf("Enter the vector length (max 100): ");
    scanf("%d", &n);

    // Basic validation to ensure we don't exceed array bounds
    if (n > 100 || n <= 0) {
        printf("Invalid length. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // 2. Input elements for the first vector
    printf("Enter the first vector : ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vector1[i]);
    }

    // 3. Input elements for the second vector
    printf("Enter the second vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vector2[i]);
    }

    // 4. Calculate the scalar product
    // Formula: sum of (x_i * y_i)
    for (int i = 0; i < n; i++) {
        scalar_product += (vector1[i] * vector2[i]);
    }

    // 5. Display the result
    // Using %.0f to match your example output format if inputs are integers
    printf("The scalar product is %.0f\n", scalar_product);

    return 0;
}