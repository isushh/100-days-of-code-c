/*
Q40: Write a program to find the 1's complement of a binary number
and print it.
Without using arrays and strings.
*/

#include <stdio.h>

void onesComplement(long long n) {
    if (n >= 10)
        onesComplement(n / 10);

    int digit = n % 10;

    if (digit == 0)
        printf("1");
    else if (digit == 1)
        printf("0");
    else
        printf("\nInvalid binary number");
}

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("1's complement = ");
    onesComplement(binary);

    return 0;
}