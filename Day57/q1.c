/*
Q107: Write a program to take an array of integers as input and
find the Previous Greater Element (PGE) for each element using the
brute force (nested loop) approach.
If there is no greater element on the left, print -1.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, prevGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    for (i = 0; i < n; i++) {
        prevGreater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        printf("%d", prevGreater);

        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
