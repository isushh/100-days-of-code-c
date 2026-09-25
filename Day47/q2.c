/*
Q94: Find the longest word in a sentence.
*/

#include <stdio.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, currentLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currentLen++;
        }
        else {
            if (currentLen > maxLen) {
                maxLen = currentLen;

                for (j = 0; j < currentLen; j++) {
                    longest[j] = str[i - currentLen + j];
                }
                longest[currentLen] = '\0';
            }

            currentLen = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}