/**********************************************
*File name:    ProgrammingPracticeTwo.c
*Description:   C primer plus 第3章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
//函数的功能：输入一个ASCII码值，然后打印输入的字符。
int main()
{
    int value;
    printf("Please enter an ASCII code value:\n");
    scanf("%d",&value);
    printf("%c",value);
    return 0;
}