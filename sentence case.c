/* Author: XYZ
Date: 22-10-26
Description:
Q120: Change string to sentence / title case (capitalize first letter of each word).
Sample Test Case:
Input: I am trying to build logic.
Output: I Am Trying To Build Logic.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[200];
    int i, newWord = 1;

    printf("Enter string: \n");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if (isspace(str[i]))
            {
                newWord = 1;
            }
            else
            {
                if (newWord)
                {
                    str[i] = toupper((unsigned char)str[i]);
                    newWord = 0;
                }
            }
        }
        printf("%s", str);
    }
    return 0;
}
