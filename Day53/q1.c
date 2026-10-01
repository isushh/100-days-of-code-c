/*
Q103: Write a program to find the pivot index of an array.
The pivot index is the index where the sum of all elements
to the left is equal to the sum of all elements to the right.
If no such index exists, print -1.
*/

#include <stdio.h>

int main() {
    int nums[100];
    int n, i;
    int totalSum = 0, leftSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++) {
        totalSum -= nums[i];

        if (leftSum == totalSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1");

    return 0;
}
