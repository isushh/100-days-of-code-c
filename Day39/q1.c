/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int distinct = 1;

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

    // Check if diagonal elements are distinct
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}