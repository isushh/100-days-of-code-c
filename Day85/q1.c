/*
Q135: Assign explicit values starting from 10 and print them.

Test case:
Output:
A=10
B=11
C=12
*/

#include <stdio.h>

enum CustomValues {
    A = 10,
    B,
    C
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    return 0;
}
