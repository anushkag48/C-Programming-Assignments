/* Author: XYZ
Date: 04-11-26
Description:
Q133: Create an enum for months and print how many days each month has.
Sample Test Case:
Input: FEB
Output: 28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void)
{
    char mName[10];
    printf("Enter 3-letter month (e.g. JAN, FEB): \n");
    if (scanf("%9s", mName) != 1) return 0;

    enum Month m = 0;
    if (strcmp(mName, "JAN") == 0) m = JAN;
    else if (strcmp(mName, "FEB") == 0) m = FEB;
    else if (strcmp(mName, "MAR") == 0) m = MAR;
    else if (strcmp(mName, "APR") == 0) m = APR;
    else if (strcmp(mName, "MAY") == 0) m = MAY;
    else if (strcmp(mName, "JUN") == 0) m = JUN;
    else if (strcmp(mName, "JUL") == 0) m = JUL;
    else if (strcmp(mName, "AUG") == 0) m = AUG;
    else if (strcmp(mName, "SEP") == 0) m = SEP;
    else if (strcmp(mName, "OCT") == 0) m = OCT;
    else if (strcmp(mName, "NOV") == 0) m = NOV;
    else if (strcmp(mName, "DEC") == 0) m = DEC;

    switch (m)
    {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month!\n");
            break;
    }
    return 0;
}
