/**********************************************
*File name:     ProgrammingPracticeFour.c
*Description:   C primer plus 第七章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/*
*函数的实现：使用循环读取输入，读到#停止，同时使用if else语句
*           用感叹号替换句号，用两个感叹号替换原来的感叹号，
*           最后程序报告进行了多少次替换。
*/
int main()
{
    char alphabet, count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((alphabet = getchar()) != '#')
    {
        if (alphabet == '.')
        {
            alphabet = '!';
            count++;
        }
        else if (alphabet == '!')
        {
            putchar(alphabet);
            count++;
        }
        putchar(alphabet);
    }
    printf("\nMade %d replacements", count);
    return 0;
}