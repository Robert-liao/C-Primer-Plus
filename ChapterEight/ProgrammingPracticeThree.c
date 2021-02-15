/**********************************************
*File name:     ProgrammingPracticeThree.c
*Description:   C primer plus 第八章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
#include <ctype.h>
/*******************************************
*函数的实现：在遇到EOF之前，把输入作为字符流读取。
*           程序会报告输入中大小字母的个数。
*******************************************/
int main()
{
    int CountLowerCaseLitters = 0, CountUppercaseLitters = 0;
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            CountLowerCaseLitters++;
        }
        else if (isupper(ch))
        {
            CountUppercaseLitters++;
        }
    }
    printf("CountLowerCaseLitters=%d,CountUppercaseLitters=%d\n", CountLowerCaseLitters, CountUppercaseLitters);
    return 0;
}