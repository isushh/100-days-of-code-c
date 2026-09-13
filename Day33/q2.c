/*
Q66: Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the insertion position
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > element)
            break;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}