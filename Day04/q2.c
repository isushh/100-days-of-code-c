/*
Problem: Write a program to find and display the sum of the first n natural numbers.
The program should ask for `n`, read it from standard input, and print the
result in the format:
Sum=<value>
*/
#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter n\n");
    fflush(stdout);
    if (scanf("%lld", &n) != 1) return 0;
    long long sum = n * (n + 1) / 2;
    printf("Sum=%lld\n", sum);
    return 0;
}
