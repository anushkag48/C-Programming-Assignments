/* Author: XYZ
Date: 24-10-26
Description:
Q122: Open existing file (info.txt) and read contents using fgets() until EOF, print to console.
Sample Test Case:
Output:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("info.txt", "r");
    char line[200];

    if (fp == NULL)
    {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
