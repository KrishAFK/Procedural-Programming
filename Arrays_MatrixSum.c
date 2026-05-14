#include <stdio.h>

int main() {
    int rows, cols;
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    // 1. Get dimensions from user
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &cols);

    // Validation for the 10x10 limit
    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0) {
        printf("Error: Maximum size is 10x10.\n");
        return 1;
    }

    // 2. Input for the first matrix
    printf("Enter the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 3. Input for the second matrix
    printf("Enter the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 4. Calculate the sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 5. Display the result
    printf("The sum of the matrices is :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}