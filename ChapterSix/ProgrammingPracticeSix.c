#include <stdio.h>
int main()
{
    int UpperLimit, LowerLimit;
    printf("Please enter the number of LowerLimit in the table:");
    scanf("%d", &LowerLimit);
    printf("Please enter the number of UpperLimit in the table:");
    scanf("%d", &UpperLimit);
    for (int i = LowerLimit; i <= UpperLimit; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}