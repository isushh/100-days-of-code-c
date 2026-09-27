/*
Q98: Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastStart = 0;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Find the starting index of the surname
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' &&
            name[i + 1] != '\0' && name[i + 1] != '\n') {
            lastStart = i + 1;
        }
        i++;
    }

    // Print initials of all words except the surname
    if (name[0] != ' ')
        printf("%c.", name[0]);

    i = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && (i + 1) != lastStart &&
            name[i + 1] != ' ' && name[i + 1] != '\0' &&
            name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }

    // Print surname
    printf(" ");
    while (name[lastStart] != '\0' && name[lastStart] != '\n') {
        printf("%c", name[lastStart]);
        lastStart++;
    }

    return 0;
}
