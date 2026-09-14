/*
Q72: Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}