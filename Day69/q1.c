/*
Q119: Write a program to take an integer array as input.
Only one element will be repeated. Print the repeated element.
Try to find the result in one single iteration.
*/

#include <stdio.h>

int main() {
    int nums[100], freq[100] = {0};
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find repeated element in a single iteration
    for (i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("Repeated element = %d", nums[i]);
            return 0;
        }

        freq[nums[i]]++;
    }

    printf("No repeated element");

    return 0;
}