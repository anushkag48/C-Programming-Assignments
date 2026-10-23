/* Author: XYZ
Date: 23-10-26
Description:
Q121: Create text file named info.txt in write mode, write name and age using fprintf().
Sample Test Case:
Input: Name: Rahul, Age: 23
Output: File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    FILE *fp;

    printf("Enter name: \n");
    if (scanf("%49s", name) != 1) return 0;
    printf("Enter age: \n");
    if (scanf("%d", &age) != 1) return 0;

    fp = fopen("info.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
