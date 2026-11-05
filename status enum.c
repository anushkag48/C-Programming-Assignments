/* Author: XYZ
Date: 05-11-26
Description:
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Case:
Input: FAILURE
Output: Operation failed
*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void)
{
    char status[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): \n");
    if (scanf("%19s", status) != 1) return 0;

    enum Status s;
    if (strcmp(status, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(status, "FAILURE") == 0) s = FAILURE;
    else if (strcmp(status, "TIMEOUT") == 0) s = TIMEOUT;
    else return 0;

    switch (s)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}
