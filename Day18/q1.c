/*
Q35: Write a program to print all factors of a given number
without using loops and arrays.
*/

#include <stdio.h>

void factors(int n, int i) {
    if (i > n)
        return;

    if (n % i == 0)
        printf("%d ", i);

    factors(n, i + 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");
    factors(n, 1);

    return 0;
}