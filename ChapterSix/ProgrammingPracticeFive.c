/**********************************************
*File name:     ProgrammingPracticeFive.c
*Description:   C primer plus 第六章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/**********************************************************
*函数的功能：提示用户输入大写字母，使用嵌套循环以如下形式打印字母：
*                   A
*                  ABA
*                 ABCBA
*                ABCDCBA
*               ABCDEDCBA
************************************************************/
int main()
{
    char alphabet;
    int row;
    printf("Please enter capital letters:");
    scanf("%c", &alphabet);       //输入大写字母
    row = alphabet - 'A' + 1;     //计算得出打印的行数
    for (int i = 0; i < row; i++) //外层循环控制打印多少行
    {
        for (int j = 0; j < row - (i + 1); j++)
            printf(" "); //打印空格
        for (int j = 0; j <= i; j++)
            printf("%c", 'A' + j); //打印升序的字母
        for (int j = i - 1; j >= 0; j--)
            printf("%c", 'A' + j); //打印降序的字母
        printf("\n");
    }

    return 0;
}