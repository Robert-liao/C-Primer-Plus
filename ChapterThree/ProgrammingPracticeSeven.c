/**********************************************
*File name:    ProgrammingPracticeSeven.c
*Description:   C primer plus 第3章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
//函数的功能：输入身高(英寸为单位)，然后以厘米为单位显示身高。
int main()
{
    double heigh;
    printf("Please enter your height/inch:");
    scanf("%lf",&heigh);
    printf("Your height in %lf cm",heigh*2.54);
    return 0;
}