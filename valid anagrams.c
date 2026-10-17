/* Author: XYZ
Date: 17-10-26
Description:
Q115: Check if strings s and t are valid anagrams. Print Anagram or Not Anagram.
Sample Test Case:
Input: s = "anagram", t = "nagaram"
Output: Anagram
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100], t[100];
    int count[256] = {0};
    int i, isAnagram = 1;

    printf("Enter string s: \n");
    if (scanf("%99s", s) != 1) return 0;
    printf("Enter string t: \n");
    if (scanf("%99s", t) != 1) return 0;

    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }
    return 0;
}
