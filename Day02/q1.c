// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(void) {
    int l, b;
    printf("Enter two integer: ");
    if (scanf("%d %d", &l, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
