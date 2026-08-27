/*
Q36: Write a program to find the HCF (GCD) of two numbers
without using loops and arrays.
*/

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;

    return hcf(b, a % b);
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = hcf(a, b);

    printf("HCF = %d", result);

    return 0;
}