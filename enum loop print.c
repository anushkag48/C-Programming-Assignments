/* Author: XYZ
Date: 09-11-26
Description:
Q138: Print all enum names and integer values using a loop.
Sample Test Case:
Output:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN,
    TOTAL_COLORS
};

int main(void)
{
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < TOTAL_COLORS; i++)
    {
        printf("%s=%d\n", colorNames[i], i);
    }
    return 0;
}
