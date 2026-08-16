/* Author: XYZ
 Date: 06-08-26
 Description:
 calc the time*/
#include <stdio.h>

int main(void)
{
    int s=0,h,m,rs;
    printf("enter the time in secs\n");
    scanf("%d",&s);
    h = s/3600;
    s = s%3600;
    m = s/60;
    rs = s%60;
    printf("Time = %d:%d:%d\n",h,m,rs);
    // return 0;
}

