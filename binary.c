/* Author: XYZ
 Date: 03-09-26
 Description:
 to convert a decimal number to binary number*/
#include <stdio.h>
int main(void)
{
    int n,rem,binary=0,place=1;
    printf("Enter a number\n");
    scanf("%d",&n);
        if (n==0)
        {
            printf("Binary equivalent: 0\n");
            return 0;
        }
    
    while(n>0)
    {
        rem = n%2;
        binary = binary + rem * place;
        n = n/2;
        place = place * 10;
    }
   printf("Binary equivalent: %d\n", binary);
    // return 0;
}
