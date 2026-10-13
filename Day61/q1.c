/*
Q111: Write a program to take an integer array arr and an integer k
as inputs. Find the first negative integer in each subarray of size k
moving from left to right. If no negative exists in a window, print 0.
Print the results separated by spaces.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int firstNegative;

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

    printf("First negative elements: ");

    for (i = 0; i <= n - k; i++) {
        firstNegative = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if (i < n - k)
            printf(" ");
    }

    return 0;
}
