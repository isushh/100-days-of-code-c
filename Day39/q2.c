/*
Q78: Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Main diagonal exists only for a square matrix");
        return 0;
    }

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal
    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}