/*
Q81: Count characters in a string without using built-in length functions.
*/

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        if (str[count] == '\n') {
            break;
        }
        count++;
    }

    printf("Length = %d", count); 
    return 0;
}