#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    double Inch = 0;
    char FlagBit[3];

    while (1)
    {
        /* code */
        printf("Please enter an inch unit:\n");
        while (1)
        {
            /* code */
            scanf("%lf", &Inch);
            if (Inch < 0)
            {
                /* code */

                printf("The input data is illegal,please enter again\n");
            }
            else
            {
                break;
            }
        }

        printf("The inches are converted to %lf centimeter\n", 2.54 * Inch);
        printf("Would you like to continue the conversion?YES or NO\n");
        scanf("%s", FlagBit);
        if (strcmp(FlagBit, "YES") == 0)
        {
            ;
        }
        else
        {
            break;
        }
    }
    return 0;
}