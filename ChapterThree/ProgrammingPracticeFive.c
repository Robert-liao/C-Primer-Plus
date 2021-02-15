/**********************************************
*File name:    ProgrammingPracticeFive.c
*Description:   C primer plus 第3章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <math.h>
//函数的功能：输入年龄，然后显示该年龄对应的秒数（一年大约有3.156*10的7次方秒）
int main()
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age);
    printf("Your age corresponds %.2lf to seconds", age * (3.156 * pow(10, 7)));
    return 0;
}