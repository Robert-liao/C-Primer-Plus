/******************************************
*File name:ProgrammingPracticeTen.c
*Description:C primer plus 第九章课后编程10题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：to_base_n
*函数功能：以第二个参数指定的进制(2~10)打印第一个参数的数值。
*输入参数：无符号的长整型和int类型
*输出参数：第一个参数的数值(是以第二个参数指定进制显示)
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
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