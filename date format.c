/* Author: XYZ
Date: 02-10-26
Description:
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Case:
Input: 15/04/2025
Output: 15-Apr-2025
*/

#include <stdio.h>

int main(void)
{
    char date[20];
    int day, month, year;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): \n");
    if (scanf("%19s", date) == 1)
    {
        if (sscanf(date, "%d/%d/%d", &day, &month, &year) == 3)
        {
            if (month >= 1 && month <= 12)
            {
                printf("%02d-%s-%d\n", day, months[month], year);
            }
        }
    }
    return 0;
}
