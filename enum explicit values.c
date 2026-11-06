/* Author: XYZ
Date: 06-11-26
Description:
Q135: Assign explicit values starting from 10 and print them.
Sample Test Case:
Output:
A=10
B=11
C=12
*/

#include <stdio.h>

enum Letters {
    A = 10,
    B,
    C
};

int main(void)
{
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    return 0;
}
