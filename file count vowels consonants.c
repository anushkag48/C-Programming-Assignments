/* Author: XYZ
Date: 30-10-26
Description:
Q128: Read text file and count vowels and consonants, ignore digits and symbols.
Sample Test Case:
Output:
Vowels: 8
Consonants: 10
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

    int vowels = 0, consonants = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha((unsigned char)ch))
        {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
