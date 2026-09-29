/*
Q101: Write a program to take a sorted array and a target as input.
Print the index of the first and last occurrence of the target.
If the target is not present, print -1 -1.
*/

#include <stdio.h>

int main() {
    int nums[100];
    int n, target;
    int i, first = -1, last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}