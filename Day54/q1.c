/*
Q104: Write a program to find the pivot integer x such that
the sum of numbers from 1 to x is equal to the sum of
numbers from x to n. If no such integer exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, x, i;
    int leftSum, rightSum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (i = 1; i <= x; i++) {
            leftSum += i;
        }

        // Sum from x to n
        for (i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
