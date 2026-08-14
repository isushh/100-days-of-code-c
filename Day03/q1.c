/*
Problem: Write a program to convert temperature from Celsius to Fahrenheit.
The program reads a Celsius temperature from standard input and prints the
corresponding Fahrenheit temperature in the format:
Fahrenheit=<value>
*/
#include <stdio.h>

int main(void) {
	int c;
	printf("Enter temperature in Celsius\n");
	fflush(stdout);
	if (scanf("%d", &c) != 1) return 0;
	int f = (c * 9) / 5 + 32;
	printf("Fahrenheit=%d", f);
	return 0;
}

