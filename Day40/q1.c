/*
Q79: Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, k;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    // Upper diagonals (including main diagonal)
    for (k = 0; k < cols; k++) {
        i = 0;
        j = k;

        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Lower diagonals
    for (k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}