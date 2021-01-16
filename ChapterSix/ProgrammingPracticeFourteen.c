#include <stdio.h>
int main()
{
    double first[8], second[8];
    static double sum = 0;
    printf("Please enter data for the first array:");
    for (int i = 0; i < 8; i++)
    {
        /* code */
        scanf("%lf", &first[i]);
        sum += first[i];
        second[i] = sum;
    }
    for (int i = 0; i < 8; i++)
    {
        /* code */
        printf("%lf\t", first[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        /* code */
        printf("%lf\t", second[i]);
    }
    return 0;
}