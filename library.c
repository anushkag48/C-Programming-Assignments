/* Author: XYZ
   Date: 01-09-26
   Description: Calculate library fine based on the number of late days
*/

#include <stdio.h>

int main(void)
{
    int days, fine;

    printf("Enter number of late days: \n");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Library Fine = Rs. %d \n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Library Fine = Rs. %d \n", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Library Fine = Rs. %d \n", fine);
    }
    else
    {
        printf("Membership Cancelled \n");
    }

    return 0;
}
