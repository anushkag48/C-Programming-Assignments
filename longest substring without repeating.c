/* Author: XYZ
Date: 16-10-26
Description:
Q114: Find length of longest substring without repeating characters.
Sample Test Case:
Input: s = "abcabcbb"
Output: 3
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[200];
    int lastPos[256];
    int i, maxLen = 0, start = 0;

    printf("Enter string: \n");
    if (scanf("%199s", s) != 1) return 0;

    for (i = 0; i < 256; i++) lastPos[i] = -1;

    for (i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char)s[i];
        if (lastPos[ch] >= start)
        {
            start = lastPos[ch] + 1;
        }
        lastPos[ch] = i;
        int currentLen = i - start + 1;
        if (currentLen > maxLen)
        {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
