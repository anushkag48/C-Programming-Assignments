/* Author: XYZ
Date: 14-11-26
Description:
Q143: Find and print the student with the highest marks.
Sample Test Case:
Input: 3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output: Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void)
{
    int n, i, topIdx = 0;
    printf("Enter number of students: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks > s[topIdx].marks)
        {
            topIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[topIdx].name, s[topIdx].marks);
    return 0;
}
