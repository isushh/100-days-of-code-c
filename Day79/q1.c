/*
Q129: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.

Test case:
File: numbers.txt (Content: 10 20 30 40 50)
Output:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", (double)sum / count);
    }

    return 0;
}
