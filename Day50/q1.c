/*
Q99: Change the date format from dd/mm/yyyy to dd-MMM-yyyy.
*/

#include <stdio.h>

int main() {
    char date[11];
    char *month[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int day, mon, year;

    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%s", date);

    day = (date[0] - '0') * 10 + (date[1] - '0');
    mon = (date[3] - '0') * 10 + (date[4] - '0');
    year = (date[6] - '0') * 1000 +
           (date[7] - '0') * 100 +
           (date[8] - '0') * 10 +
           (date[9] - '0');

    printf("%02d-%s-%04d", day, month[mon], year);

    return 0;
}
