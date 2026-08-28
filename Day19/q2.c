/*
Q38: Write a program to find the sum of digits of a number
without using loops and arrays.
*/

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = sumDigits(n);

    printf("Sum of digits = %d", sum);

    return 0;
}