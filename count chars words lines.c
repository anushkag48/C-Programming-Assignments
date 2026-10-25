/* Author: XYZ
Date: 25-10-26
Description:
Q123: Read text file and count characters, words, and lines.
Sample Test Case:
Output:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char filename[100];
    printf("Enter filename: \n");
    if (scanf("%99s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if (ch == '\n') lines++;

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n') lines++;

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
