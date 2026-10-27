/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Test case:
Input: Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output: File updated successfully with appended text.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[256];

    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 1;

    /* clear input buffer */
    while (getchar() != '\n');

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 1;

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file for appending!\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
