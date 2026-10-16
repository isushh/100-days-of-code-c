/*
Q114: Write a program to take a string s as input.
Find the length of the longest substring without repeating characters.
Print the length as output.
*/

#include <stdio.h>

int main() {
    char s[100];
    int i, j, k;
    int length = 0, maxLength = 0, currentLength;

    printf("Enter a string: ");
    scanf("%s", s);

    // Find length of string
    while (s[length] != '\0') {
        length++;
    }

    // Find longest substring without repeating characters
    for (i = 0; i < length; i++) {
        currentLength = 0;

        for (j = i; j < length; j++) {

            for (k = i; k < j; k++) {
                if (s[k] == s[j])
                    break;
            }

            if (k < j)
                break;

            currentLength++;

            if (currentLength > maxLength)
                maxLength = currentLength;
        }
    }

    printf("Length = %d", maxLength);

    return 0;
}
