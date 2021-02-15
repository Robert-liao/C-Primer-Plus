/**********************************************
*File name:     ProgrammingPracticeFive.c
*Description:   C primer plus 第七章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/*******************************************************
*函数的实现：使用switch的方式重写了编程第4题，其功能是一样的。
*******************************************************/
int main()
{
    char alphabet, count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((alphabet = getchar()) != '#')
    {

        switch (alphabet)
        {
        case '.':
            alphabet = '!';
            count++;
            break;
        case '!':
            putchar(alphabet);
            count++;
            break;
        }
        putchar(alphabet);
    }
    printf("\nMade %d replacements", count);
    return 0;
}