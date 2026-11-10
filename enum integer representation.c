/* Author: XYZ
Date: 10-11-26
Description:
Q139: Show that enums store integers by printing assigned values.
Sample Test Case:
Output: SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>

enum StatusCheck {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void)
{
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
