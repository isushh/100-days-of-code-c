/*
Problem: Write a program to swap two numbers using a third variable.
The program reads two integers from standard input and prints the
values after swapping in the format:
After swap: <first> <second>
*/
#include <stdio.h>

int main(void) {
	int a, b;
	printf("Enter two numbers\n");
	fflush(stdout);
	if (scanf("%d %d", &a, &b) != 2) return 0;
	int temp = a;
	a = b;
	b = temp;
	printf("After swap: %d %d\n", a, b);
	return 0;
}

