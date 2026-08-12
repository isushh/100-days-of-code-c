// Write a program to input two numbers and display their sum, difference, product, and quotient
//
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integer: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (b == 0) {
        fprintf(stderr, "Error: division by zero\n");
        return 1;
    }
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    return 0;
}
