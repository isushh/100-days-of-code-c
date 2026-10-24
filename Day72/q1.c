/*
Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.

Test case:
Input: File: info.txt (Content: Name: Rahul\nAge: 23)
Output:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
