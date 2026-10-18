/*
Q116: Write a program to take an integer array nums containing
only positive integers and an integer target as inputs.
Find two distinct indices i and j such that
nums[i] + nums[j] = target.
Print the two indices separated by a space.
If no solution exists, print "-1 -1".
*/

#include <stdio.h>

int main() {
    int nums[100];
    int n, target, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}
