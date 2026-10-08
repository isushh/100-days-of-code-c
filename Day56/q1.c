/*
Q106: Write a program to take an array of integers as input and
find the Next Greater Element (NGE) for each element using the
brute force (nested loop) approach.
If there is no greater element on the right, print -1.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, nextGreater;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for (i = 0; i < n; i++) {
        nextGreater = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if (i != n - 1)
            printf(", ");
    }

    return 0;
}