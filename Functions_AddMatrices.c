#include <stdio.h>

#define SIZE 2

/**
 * Function to read a 2x2 matrix from the user
 */
void inputMatrix(int mat[SIZE][SIZE], char name) {
    printf("Enter elements for Matrix %c (2x2):\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

/**
 * Function to add two 2x2 matrices
 */
void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int sum[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

/**
 * Function to display a 2x2 matrix
 */
void printMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], Sum[SIZE][SIZE];

    // Get input for both matrices
    inputMatrix(A, 'A');
    printf("\n");
    inputMatrix(B, 'B');

    // Perform addition
    addMatrices(A, B, Sum);

    // Display results
    printf("\n--- Resulting Sum Matrix ---\n");
    printMatrix(Sum);

    return 0;
}