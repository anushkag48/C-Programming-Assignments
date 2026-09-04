/* Author: XYZ
 Date: 02-09-26
 Description:
 to check whether the input is pallindrome or not*/
#include <stdio.h>
int main(void)
{
    int n, o, r=0,remainder;
    printf("Enter a number\n");
    scanf("%d",&n);
    o = n;
    while (n!=0)
    {
        remainder = n%10;
        r = r * 10 + remainder;
        n = n/10;
    }
    if(o==r)
    {
        printf("the number is palindrome.\n");
    }
    else
    {
        printf("the number is not palindrome.\n");
    }
    // return 0;
}
