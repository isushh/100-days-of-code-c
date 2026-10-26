/*
Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

Test case:
Input: Source File: source.txt (Content: Learning C File Handling)
Output: File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    int ch;

    printf("Enter source filename: ");
    if (scanf("%s", srcFile) != 1) return 1;

    printf("Enter destination filename: ");
    if (scanf("%s", destFile) != 1) return 1;

    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
