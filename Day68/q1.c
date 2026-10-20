/*
Q118: Write a program to take an input array of size n.
The array should contain all the integers between 0 to n
except for one. Print that missing number.
*/

#include <stdio.h>

int main() {
    int nums[100];
    int n, i;
    int expectedSum, actualSum = 0, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum = actualSum + nums[i];
    }

    // Sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - actualSum;

    printf("Missing number = %d", missing);

    return 0;
}