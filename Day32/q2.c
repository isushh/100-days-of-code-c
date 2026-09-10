/*
Q64: Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        freq[0]++;

    while (n != 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (i = 1; i <= 9; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d", maxDigit);

    return 0;
}