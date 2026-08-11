#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter first integer: ");
    if (scanf("%d", &a) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Enter second integer: ");
    if (scanf("%d", &b) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Sum = %d\n", a + b);
    return 0;
 }
