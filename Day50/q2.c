/*
Q100: Print all sub-strings of a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Sub-strings:\n");

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
