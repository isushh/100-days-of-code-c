/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.

Test case:
Input:
Student 1 -> Name: Asha, Roll: 101, Marks: 85
Student 2 -> Name: Ravi, Roll: 102, Marks: 92
Output:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n, i;
    struct Student s;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 1;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    printf("\nReading records from students.txt:\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}
