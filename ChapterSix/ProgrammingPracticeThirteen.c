#include <stdio.h>
#include <math.h>
int main()
{
    int number[8];
    for (int i = 0; i < 8; i++)
    {
        /* code */
        number[i] = exp2(i+1);
    }
    int TemporaryVariables = 0;
    do
    {
        /* code */
        printf("%d ", number[TemporaryVariables++]);
    } while (TemporaryVariables < 8);

    return 0;
}