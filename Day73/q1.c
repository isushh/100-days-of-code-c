/*
Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Test case:
Input: File: sample.txt (Content: Hello world\nThis is C programming)
Output:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 1;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    /* If the file had characters and didn't end with newline, count the last line */
    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    return 0;
}
