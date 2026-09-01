/* Author: XYZ
 Date: 01-09-26
 Description:
 to find if the triangle is valid or not*/
#include <stdio.h>

int main(void)
{
    int day;

        printf("Enter a number (1-7): \n");
        scanf("%d", &day);

        switch(day)
        {
            case 1:
                printf("Monday");
                break;

            case 2:
                printf("Tuesday");
                break;

            case 3:
                printf("Wednesday");
                break;

            case 4:
                printf("Thursday");
                break;

            case 5:
                printf("Friday");
                break;

            case 6:
                printf("Saturday");
                break;

            case 7:
                printf("Sunday");
                break;

            default:
                printf("Invalid number");
        }

        return 0;
    }
