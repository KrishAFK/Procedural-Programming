#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double data[2][2];
} Matrix2x2;

// Function to handle user input
void inputMatrix(Matrix2x2 *m) {
    printf("Enter the elements of a 2x2 matrix:\n");
    printf("Row 1, Col 1 (a): ");
    scanf("%lf", &m->data[0][0]);
    printf("Row 1, Col 2 (b): ");
    scanf("%lf", &m->data[0][1]);
    printf("Row 2, Col 1 (c): ");
    scanf("%lf", &m->data[1][0]);
    printf("Row 2, Col 2 (d): ");
    scanf("%lf", &m->data[1][1]);
}

bool invertMatrix(Matrix2x2 input, Matrix2x2 *result) {
    double det = (input.data[0][0] * input.data[1][1]) - 
                 (input.data[0][1] * input.data[1][0]);

    if (det == 0) return false;

    double invDet = 1.0 / det;

    result->data[0][0] =  input.data[1][1] * invDet;
    result->data[0][1] = -input.data[0][1] * invDet;
    result->data[1][0] = -input.data[1][0] * invDet;
    result->data[1][1] =  input.data[0][0] * invDet;

    return true;
}

int main() {
    Matrix2x2 userMat;
    Matrix2x2 inverse;

    inputMatrix(&userMat);

    if (invertMatrix(userMat, &inverse)) {
        printf("\nInverse Matrix:\n");
        for (int i = 0; i < 2; i++) {
            printf("[ %8.1f  %8.1f ]\n", inverse.data[i][0], inverse.data[i][1]);
        }
    } else {
        printf("\nError: The determinant is 0. This matrix has no inverse.\n");
    }

    return 0;
}