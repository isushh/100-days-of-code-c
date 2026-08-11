// Write a program to input two numbers and display their sum.
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Sum = %d\n", a + b);
    return 0;
}
