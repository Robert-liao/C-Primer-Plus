/**********************************************
*File name:    ProgrammingPracticeTwo.c
*Description:   C primer plus 第六章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/*******************************************
*函数的功能：使用嵌套循环，按照如下格式打印字符：
*     $
*     $$
*     $$$
*     $$$$
*     $$$$$
********************************************/
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}