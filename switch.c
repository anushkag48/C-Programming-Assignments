/* Author: XYZ
   Date: 01-09-26
   Description: Implement a basic calculator using switch-case
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter first number: \n");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %): \n");
    scanf(" %c", &op);

    printf("Enter second number: \n");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
            {
                printf("Result = %d\n", a / b);
            }
            else
            {
                printf("Division by zero is not possible\n");
            }
            break;

        case '%':
            if (b != 0)
            {
                printf("Result = %d\n", a % b);
            }
            else
            {
                printf("Modulo by zero is not possible\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
