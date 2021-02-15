/**********************************************
*File name:    ProgrammingPracticeThree.c
*Description:   C primer plus 第四章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
//函数的功能：读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
int main()
{
    float number;
    printf("Please enter a floating point number:");
    scanf("%f", &number);
    printf("The input is %.1f or %.1e\n", number, number);
    printf("The input is %+.3f or %.3E\n", number, number);
}