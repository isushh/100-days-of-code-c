/*
Problem: Write a program to calculate simple and compound interest for given principal, rate, and time.
The program reads principal, rate, and time from standard input and prints:
Simple Interest=<value>, Compound Interest=<value>
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    double P, R, T;
    printf("Enter principal\n");
    fflush(stdout);
    if (scanf("%lf", &P) != 1) return 0;
    printf("Enter rate\n");
    fflush(stdout);
    if (scanf("%lf", &R) != 1) return 0;
    printf("Enter time\n");
    fflush(stdout);
    if (scanf("%lf", &T) != 1) return 0;
    double si = (P * R * T) / 100.0;
    double amount = P * pow(1.0 + R/100.0, T);
    double ci = amount - P;
    printf("Simple Interest=%.0f, Compound Interest=%.2f", si, ci);
    return 0;
}
