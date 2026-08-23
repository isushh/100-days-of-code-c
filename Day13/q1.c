/*
Q25: Write a program to implement a basic calculator using switch-case
for +, -, *, /, %.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("%d", num1 + num2);
            break;

        case '-':
            printf("%d", num1 - num2);
            break;

        case '*':
            printf("%d", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if (num2 != 0)
                printf("%d", num1 % num2);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}