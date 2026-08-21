/*
Q24: Write a program to calculate electricity bill based on units consumed
with these rates:
First 100 units at Rs. 5/unit
Next 100 units at Rs. 7/unit
Next 100 units at Rs. 10/unit
Above 300 units at Rs. 12/unit.
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid number of units");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    if (units >= 0) {
        printf("Bill: Rs. %g", bill);
    }

    return 0;
}
