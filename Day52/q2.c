/*
Q102: Write a program to take a sorted array and an integer x as input.
Find the index (0-based) of the smallest element in the array
that is greater than or equal to x (Ceil of x).
If such an element does not exist, print -1.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, x, i, index = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find the ceil of x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}
