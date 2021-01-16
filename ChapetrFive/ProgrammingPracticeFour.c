#include <stdio.h>
#include <math.h>
#define INCH 2.54
#define FEET 30.48
int main()
{
    float height;
    printf("Enter a height in centimeters:");
    while (1)
    {
        scanf("%f", &height);
        if (height <= 0)
        {
            printf("bye");
            break;
        }
        int feet = height / FEET;
        float inche = fmod(height, FEET) / INCH;
        printf("%.1f cm=%d feet,%.1f inches", height, feet, inche);
        printf("\nEnter a height in centimeters(<0 to quit):");
    }

    return 0;
}