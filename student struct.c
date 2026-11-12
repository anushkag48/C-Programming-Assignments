/* Author: XYZ
Date: 12-11-26
Description:
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
Sample Test Case:
Input: Name: Asha, Roll: 101, Marks: 90
Output: Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;
    printf("Enter Name, Roll No, Marks: \n");
    if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    }
    return 0;
}
