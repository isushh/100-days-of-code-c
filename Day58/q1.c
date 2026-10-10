/*
Q108: Write a program to take an integer array nums as input.
Print an array such that each element is equal to the product
of all the elements of the array except itself.
*/

#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, j;
    int product;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate the product except self for each element
    for (i = 0; i < n; i++) {
        product = 1;

        for (j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    printf("Answer array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i != n - 1)
            printf(" ");
    }

    return 0;
}