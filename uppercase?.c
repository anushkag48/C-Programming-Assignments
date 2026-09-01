/* Author: XYZ
 Date: 06-08-26
 Description:
 to find if the input is uppercase, lowercase, digit or special character*/
#include <stdio.h>

int main(void)
{
   char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
        printf("The character is uppercase\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The character is lowercase\n");
    }
else if(ch>='0' && ch<='9')
{
    printf("The character is a number\n");
}
    else
    {
        printf("The character is a special character\n");
    }
   // return 0;
}
