/*
Q58: Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d, Min = %d", max, min);

    return 0;
}