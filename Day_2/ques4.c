// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(void) {
    double r;
    const double pi = 3.141592653589793;
    printf("Enter radius: ");
    if (scanf("%lf", &r) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    double area = pi * r * r;
    double circumference = 2 * pi * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
