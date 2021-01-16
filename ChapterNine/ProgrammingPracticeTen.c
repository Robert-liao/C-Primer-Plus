#include <stdio.h>
void to_base_n(unsigned long value, int Base);
int main()
{
    unsigned long value;
    int base;
    printf("Enter an integer(q to quit):\n");
    while (scanf("%lu,%d", &value, &base) == 2)
    {
        printf("Binary equivalent:");
        to_base_n(value, base);
        putchar('\n');
        printf("Enter an integer(q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}
void to_base_n(unsigned long value, int Base)
{
    int r;
    if (Base >= 2 && Base <= 10)
    {
        r = value % Base;
        if (value >= Base)
            to_base_n(value / Base, Base);
        if(r==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",r);
        }
        
    }
    else
    {
        printf("输入的进制不符合要求！");
    }
}