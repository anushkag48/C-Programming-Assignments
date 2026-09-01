/* Author: XYZ
   Date: 01-09-26
   Description: Find profit or loss percentage using cost price and selling price
*/

#include <stdio.h>

int main(void)
{
    float cp, sp, profit, loss, percentage;

    printf("Enter cost price: \n");
    scanf("%f", &cp);

    printf("Enter selling price: \n");
    scanf("%f", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
