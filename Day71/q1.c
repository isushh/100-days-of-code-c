/*
Q121: Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.

Test case:
Input: Name: Rahul, Age: 23
Output: File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%[^\n]", name);
    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
