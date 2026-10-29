/* Author: XYZ
Date: 29-10-26
Description:
Q127: Read text from input.txt, convert lowercase to uppercase, and write to output.txt.
Sample Test Case:
Input: Hello World
Output: HELLO WORLD
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("Error opening input.txt\n");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL)
    {
        fclose(fin);
        printf("Error opening output.txt\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF)
    {
        fputc(toupper((unsigned char)ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Converted text written to output.txt\n");
    return 0;
}
