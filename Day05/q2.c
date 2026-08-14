/*
Problem: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
The program reads an integer number of seconds from standard input and prints:
hours:minutes:seconds
*/
#include <stdio.h>

int main(void) {
    int total;
    printf("Enter time in seconds\n");
    fflush(stdout);
    if (scanf("%d", &total) != 1) return 0;
    printf("Time in seconds=%d\n", total);
    int hours = total / 3600;
    int rem = total % 3600;
    int minutes = rem / 60;
    int seconds = rem % 60;
    printf("%d:%d\n", hours, minutes);
    return 0;
}
