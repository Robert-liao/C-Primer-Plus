/**********************************************
*File name:     ProgrammingPracticeFour.c
*Description:   C primer plus 第六章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/*********************************************
*函数的功能：使用嵌套循环，按照以下格式打印字母：
*    A
*    BC
*    DEF
*    GHIJ
*    KLMNO
*    PQRSTU
***********************************************/
int main()
{
    static char alphabet='A';
    for(int i=0;i<6;i++) //外层循环控制打印行数
    {
        for(int j=0;j<=i;j++)
        {
             printf("%c",alphabet++);
        }
        printf("\n");
    }
    return 0;
}