/* Author: XYZ
Date: 08-11-26
Description:
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Sample Test Case:
Input: GUEST
Output: Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main(void)
{
    char rName[20];
    printf("Enter role (ADMIN, USER, GUEST): \n");
    if (scanf("%19s", rName) != 1) return 0;

    enum Role r;
    if (strcmp(rName, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(rName, "USER") == 0) r = USER;
    else if (strcmp(rName, "GUEST") == 0) r = GUEST;
    else return 0;

    switch (r)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}
