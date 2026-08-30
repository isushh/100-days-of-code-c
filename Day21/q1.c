/*
Q41: Write a program to swap the first and last digit of a number.
Without using arrays and strings.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, middle, swapped;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;
    digits = 0;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    first = n / (int)pow(10, digits - 1);

    middle = (n % (int)pow(10, digits - 1)) / 10;

    swapped = last * (int)pow(10, digits - 1) +
              middle * 10 +
              first;

    printf("Number after swapping = %d", swapped);

    return 0;
}