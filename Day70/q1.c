/*
Q120: Write a program to take an integer array as input
and find the majority element (element that appears more than n/2 times).
If no majority element exists, print "No majority element".
*/

#include <stdio.h>

int main() {
    int nums[100], n, i, j, count, majority = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    if (majority != -1) {
        printf("Majority element = %d", majority);
    } else {
        printf("No majority element");
    }

    return 0;
}
