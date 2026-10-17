/*
Q115: Write a program to take two strings s and t as inputs
(assume all characters are lowercase). Determine if s and t
are valid anagrams, meaning they contain the same characters
with the same frequencies. Print "Anagram" if they are,
otherwise print "Not Anagram".
*/

#include <stdio.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    int i;

    printf("Enter the first string: ");
    scanf("%s", s);

    printf("Enter the second string: ");
    scanf("%s", t);

    // Count frequency of characters in first string
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequency of characters in second string
    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}