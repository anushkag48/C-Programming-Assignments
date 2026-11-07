/* Author: XYZ
Date: 07-11-26
Description:
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Sample Test Case:
Input: ADD 10 20
Output: 30
*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main(void)
{
    char opStr[20];
    int a, b;

    printf("Enter operation and two numbers (e.g. ADD 10 20): \n");
    if (scanf("%19s %d %d", opStr, &a, &b) != 3) return 0;

    enum Operation op;
    if (strcmp(opStr, "ADD") == 0) op = ADD;
    else if (strcmp(opStr, "SUBTRACT") == 0) op = SUBTRACT;
    else if (strcmp(opStr, "MULTIPLY") == 0) op = MULTIPLY;
    else return 0;

    switch (op)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}
