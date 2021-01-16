#include <stdio.h>
int main()
{
    double pitn, cup, ounce, spoon, TeaSpoon;
    printf("Please enter the number of cups:");
    scanf("%lf", &cup);
    printf("%lf cups equal %lf pint,%lf ounce,%lf spoon,%lf,TeaSpoon", cup, cup / 2, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);
    return 0;
}