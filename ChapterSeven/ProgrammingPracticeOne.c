/**********************************************
*File name:     ProgrammingPracticeOne.c
*Description:   C primer plus 第七章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include<string.h>
/****************************************************************************
*函数的实现：程序读取输入直到遇到#停止，然后报告读取的空格，换行和所有其他字符的数量。
*****************************************************************************/
int main()
{
    char c;
    int SpaceNumber = 0, Wrap = 0, Ohteralphabet = 0;
    while ((c = getchar()) != '#')
    {
        /* code */
        if (c == ' ')
        {
            SpaceNumber++;
        }
        if (c == '\n')
        {
            Wrap++;
        }
        else
        {
            Ohteralphabet++;
        }
    }
    printf("SpaceNumber=%d,Wrap=%d,Ohteralphabet=%d\n", SpaceNumber, Wrap, Ohteralphabet);
    return 0;
}