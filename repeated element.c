/* Author: XYZ
Date: 21-10-26
Description:
Q119: Find the single repeated element in array in one single iteration.
Sample Test Case:
Input: nums1 = [1,3,3,4]
Output: 3
*/

#include <stdio.h>

int main(void)
{
    int n, i, num, repeated = -1;

    printf("Enter size: \n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int visited[100000] = {0};

    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num >= 0 && num < 100000)
        {
            if (visited[num] && repeated == -1)
            {
                repeated = num;
            }
            visited[num] = 1;
        }
    }

    printf("%d\n", repeated);
    return 0;
}
