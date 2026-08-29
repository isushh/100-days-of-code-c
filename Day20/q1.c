/*
Q39: Write a program to find the product of odd digits of a number.
Without using arrays and strings.
*/

#include <stdio.h>

int productOddDigits(int n) {
    if (n == 0)
        return 1;

    int digit = n % 10;

    if (digit % 2 != 0)
        return digit * productOddDigits(n / 10);
    else
        return productOddDigits(n / 10);
}

int main() {
    int n, product;

    printf("Enter a number: ");
    scanf("%d", &n);

    product = productOddDigits(n);

    printf("Product of odd digits = %d", product);

    return 0;
}