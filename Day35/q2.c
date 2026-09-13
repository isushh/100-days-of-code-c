/*
Q70: Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    k = k % n;

    // Store rotated elements in a temporary array
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy back to the original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
