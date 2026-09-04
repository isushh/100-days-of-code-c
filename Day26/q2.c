/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i;

    // First group
    printf("*\n\n");

    // Second group
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third group
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth group
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth group
    printf("*\n");

    return 0;
}