/*
Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.

Test cases:
Input: Filename: sample.txt (File Exists: Yes)
Output:
File opened successfully.
(Displays file content)

Input: Filename: nofile.txt (File Exists: No)
Output: Error: File does not exist!
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char buffer[256];

    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 1;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
