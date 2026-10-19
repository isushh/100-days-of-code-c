/*
Q117: Write a program to take two sorted arrays of size m and n
as input. Merge both the arrays such that the merged array is
also sorted. Print the merged array.
*/

#include <stdio.h>

int main() {
    int nums1[100], nums2[100], merged[200];
    int m, n, i, j, k;

    printf("Enter the size of first array: ");
    scanf("%d", &m);

    printf("Enter the elements of first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n);

    printf("Enter the elements of second sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        }
        else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
