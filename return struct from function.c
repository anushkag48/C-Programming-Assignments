/* Author: XYZ
Date: 16-11-26
Description:
Q145: Return a structure containing top student's details from a function.
Sample Test Case:
Input: 3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output: Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student arr[], int n)
{
    int topIdx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].marks > arr[topIdx].marks)
        {
            topIdx = i;
        }
    }
    return arr[topIdx];
}

int main(void)
{
    int n, i;
    printf("Enter number of students: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = findTopper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    return 0;
}
