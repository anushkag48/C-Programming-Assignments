/* Author: XYZ
Date: 26-10-26
Description:
Q124: Copy content from source file to destination file using fgetc() and fputc().
Sample Test Case:
Output: File copied successfully to destination.txt
*/

#include <stdio.h>

int main(void)
{
    char src[100], dest[100];
    printf("Enter source filename: \n");
    if (scanf("%99s", src) != 1) return 0;
    printf("Enter destination filename: \n");
    if (scanf("%99s", dest) != 1) return 0;

    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL)
    {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *fdest = fopen(dest, "w");
    if (fdest == NULL)
    {
        fclose(fsrc);
        printf("Error opening destination file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fsrc)) != EOF)
    {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
