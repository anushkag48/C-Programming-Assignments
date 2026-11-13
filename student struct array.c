/* Author: XYZ
Date: 13-11-26
Description:
Q142: Store details of 5 students in an array of structures and print all in tabular format.
Sample Test Case:
Output: Tabular list of all 5 students with their details
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void)
{
    struct Student students[5];
    int i;

    printf("Enter details for 5 students (Name Roll Marks): \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}
