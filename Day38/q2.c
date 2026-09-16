/*
Q76: Check if a matrix is symmetric.
*/

#include <stdio.h>
int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int symmetric = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("False");
        return 0;
    }

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0)
            break;
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
