/*
Q49: Write a program to print the following pattern:
5
45
345
2345
12345
(Nested Loops without Arrays/Strings)
*/

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}