/**********************************************
*File name:     ProgrammingPracticeThree.c
*Description:   C primer plus 第六章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/*****************************************
*函数的功能：使用嵌套循环，按如下格式打印字母：
*                  F
*                  FE
*                  FED
*                  FEDC
*                  FEDCB
*                  FEDCBA
*******************************************/
int main()
{
    char alphabet = 'F';
    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            printf("%c", alphabet - j);
        }
        printf("\n");
    }
    return 0;
}