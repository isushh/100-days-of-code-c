/*
Q37: Write a program to find the LCM of two numbers
without using loops and arrays.
*/

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;

    return hcf(b, a % b);
}

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a * b) / hcf(a, b);

    printf("LCM = %d", lcm);

    return 0;
}