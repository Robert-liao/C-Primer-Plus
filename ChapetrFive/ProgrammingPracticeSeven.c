/**********************************************
*File name:    ProgrammingPracticeSeven.c
*Description:   C primer plus 第五章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/*************************************************************************
* 函 数 名：CUBE
* 函数功能：求取形参的立方值
* 输入参数：double类型的变量
* 输出参数：无
* 返 回 值: 形参的立方值
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：无
* 修改说明：无
**************************************************************************/
double CUBE(double value);
int main()
{
    double number;
    printf("Please enter a number:");
    scanf("%lf",&number);
    printf("The cube of this number is %lf",CUBE(number));
    return 0;
}
double CUBE(double value)
{
   return value*value*value;
}