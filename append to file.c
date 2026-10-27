/* Author: XYZ
Date: 27-10-26
Description:
Q125: Open existing file in append mode and append user text without overwriting.
Sample Test Case:
Output: File updated successfully with appended text.
*/

#include <stdio.h>

int main(void)
{
    char filename[100], text[200];
    printf("Enter filename: \n");
    if (scanf("%99s", filename) != 1) return 0;

    getchar(); // consume newline
    printf("Enter text to append: \n");
    if (fgets(text, sizeof(text), stdin) == NULL) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error opening file in append mode!\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
