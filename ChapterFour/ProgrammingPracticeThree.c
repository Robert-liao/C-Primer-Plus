#include <stdio.h>
int main()
{
    float number;
    printf("Please enter a floating point number:");
    scanf("%f", &number);
    printf("The input is %.1f or %.1e\n", number, number);
    printf("The input is %+.3f or %.3E\n", number, number);
}