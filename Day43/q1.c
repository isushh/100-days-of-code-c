/*
Q85: Reverse a string.
*/

#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }

    return 0;
}