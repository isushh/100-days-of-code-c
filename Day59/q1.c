/*
Q109: Write a program to take an integer array arr and an
integer k as inputs. Print the maximum sum of all the
subarrays of size k.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int sum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    maxSum = 0;

    for (i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    for (i = 1; i <= n - k; i++) {
        sum = 0;

        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}
