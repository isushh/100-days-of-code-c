/*
Q93: Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        freq[str1[i] - 'a']++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        freq[str2[i] - 'a']--;
    }

    // Check frequencies
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}