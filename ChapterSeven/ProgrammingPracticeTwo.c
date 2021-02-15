/**********************************************
*File name:     ProgrammingPracticeTwo.c
*Description:   C primer plus 第七章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/**********************************************************************************
*函数的实现：程序读取输入直到遇到#停止，程序应打印每个输入的字符以及对应的ASCII码(十进制)。
*           每行打印8个“字符——ASCII码”组合。
************************************************************************************/
int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        if(ch=='\n')continue;
        printf("%c-%d\t", ch, ch);
        count++;
        if (count == 8)
        {
            printf("\n");
        }
    }
    return 0;
}