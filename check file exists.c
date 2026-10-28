/* Author: XYZ
Date: 28-10-26
Description:
Q126: Check if file exists before opening. If NULL, print error message; otherwise display content.
Sample Test Case:
Input: sample.txt
Output: File opened successfully.
(Displays file content)
*/

#include <stdio.h>

int main(void)
{
    char filename[100];
    printf("Enter filename: \n");
    if (scanf("%99s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
