/* Author: XYZ
Date: 03-11-26
Description:
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print Stop, Wait, or Go.
Sample Test Case:
Input: GREEN
Output: Go
*/

#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    char light[20];
    printf("Enter traffic light color (RED, YELLOW, GREEN): \n");
    if (scanf("%19s", light) != 1) return 0;

    enum TrafficLight tl;
    if (strcmp(light, "RED") == 0) tl = RED;
    else if (strcmp(light, "YELLOW") == 0) tl = YELLOW;
    else if (strcmp(light, "GREEN") == 0) tl = GREEN;
    else return 0;

    switch (tl)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
