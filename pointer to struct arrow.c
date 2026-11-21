/* Author: XYZ
Date: 21-11-26
Description:
Q150: Use pointer to struct to modify and display data using -> operator.
Sample Test Case:
Output: Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void)
{
    struct Student s = {"Default", 0, 0};
    struct Student *ptr = &s;

    // Modifying data using pointer and arrow operator
    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
