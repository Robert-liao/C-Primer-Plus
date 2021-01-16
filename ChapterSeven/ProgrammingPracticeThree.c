#include <stdio.h>
int main()
{
    printf("Please enter a series of integers (0 ending):");
    int value, evenCount = 0, OddNumber = 0, evevSum = 0, OddNumberSum = 0;
    while (1)
    {
        scanf("%d", &value);
        if (value == 0)
            break;
        if (value % 2 == 0)
        {
            evenCount++;
            evevSum += value;
        }
        else
        {
            OddNumber++;
            OddNumberSum += value;
        }
    }
    printf("The even number is %d,sum=%d,average=%d\n", evenCount, evevSum, evevSum / evenCount);
    printf("The odd Number is %d,sum=%d,average=%d\n", OddNumber, OddNumberSum, OddNumberSum / OddNumber);
    return 0;
}