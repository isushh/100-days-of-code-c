/*
Q92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase letter
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    // Find the first repeating lowercase letter
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            freq[str[i] - 'a'] > 1) {
            printf("First repeating lowercase alphabet: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet");

    return 0;
}
