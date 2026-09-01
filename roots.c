/* Author: XYZ
 Date: 01-09-26
 Description:
 to find the roots of an equation */
#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, d, r1, r2, real, imag;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);

        printf("Roots are imaginary\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}
