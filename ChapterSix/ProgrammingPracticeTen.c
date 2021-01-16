#include <stdio.h>
int main()
{
    int UpperLimit, LowerLimit;
    int sum = 0, count = 0;
    printf("Enter lower and upper integer limits:");
    while (1)
    {
        /* code */

        count = scanf("%d %d", &LowerLimit, &UpperLimit);
        if (count != 2 || UpperLimit == LowerLimit)
        {
            printf("Done");
            break;
        }
        for (int i = LowerLimit; i <= UpperLimit; i++)
        {
            /* code */
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d", LowerLimit * LowerLimit, UpperLimit * UpperLimit, sum);
        printf("\nEnter next set of limits:");
        sum = 0;
    }
}