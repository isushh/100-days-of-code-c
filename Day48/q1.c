/*
Q95: Check if one string is a rotation of another.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, len1 = 0, len2 = 0, found = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Find the lengths
    while (str1[len1] != '\0' && str1[len1] != '\n')
        len1++;

    while (str2[len2] != '\0' && str2[len2] != '\n')
        len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    // Create temp = str1 + str1
    for (i = 0; i < len1; i++)
        temp[i] = str1[i];

    for (i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    // Search for str2 in temp
    for (i = 0; i <= len1; i++) {
        int j;

        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }

        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
