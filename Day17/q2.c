/*
Q34: Write a program to check if a number is prime.
*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}