/*
Q96: Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;

            while (end >= start) {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
                printf(" ");

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }

        i++;
    }

    return 0;
}