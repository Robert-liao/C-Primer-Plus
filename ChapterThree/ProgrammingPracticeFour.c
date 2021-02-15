/**********************************************
*File name:    ProgrammingPracticeFour.c
*Description:   C primer plus 第3章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
//函数的功能：读取一个浮点数，先打印成小数点形式，再打印成指数形式，然后再打印成P记数法形式。
int main()
{
    float value;
    printf("Enter a floating-point value:");
    scanf("%f",&value);
    printf("fixed-point notation:%f\n",value);
    printf("exponential notation:%e\n",value);
    printf("p notation:%a\n",value);
   return 0;
}