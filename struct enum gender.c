/* Author: XYZ
Date: 11-11-26
Description:
Q140: Define a struct with enum Gender and print person's gender.
Sample Test Case:
Input: Gender=MALE
Output: Male
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void)
{
    struct Person p;
    char gStr[20];

    printf("Enter Gender (MALE / FEMALE): \n");
    if (scanf("%19s", gStr) != 1) return 0;

    if (strstr(gStr, "MALE") || strcmp(gStr, "Male") == 0) p.gender = MALE;
    else if (strstr(gStr, "FEMALE") || strcmp(gStr, "Female") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    if (p.gender == MALE) printf("Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");

    return 0;
}
