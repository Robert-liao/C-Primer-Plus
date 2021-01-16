#include <stdio.h>
int main()
{
    int number;
    printf("Please you enter integer:");
    scanf("%d", &number);
    for (int i = 1; i < 12; i++)
    {
        /* code */
        printf("%d ", number++);
    }

    return 0;
}