
/* Author: XYZ
 Date: 06-08-26
 Description:
 calc the SI and CI*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int p=0,t=0;
    float r=0,SI,A,CI;
    printf("enter the principle\n");
    scanf("%d",&p);
    printf("enter the time\n");
    scanf("%d",&t);
    printf("enter the rate\n");
    scanf("%f",&r);
    SI = p * r * t/100;
    A = p * pow((1+r/100),t);
    CI = A - p;
    printf("SI= %f\n", SI);
    printf("CI= %f\n", CI);
    // return 0;
}
