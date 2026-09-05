/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 4; i++) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}