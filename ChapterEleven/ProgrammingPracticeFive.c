/**********************************************
*File name:     ProgrammingPracticeFive.c
*Description:   C primer plus 第十一章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-6
*********************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/****************************************************
* 函 数 名：Search
* 函数功能：搜索target字符串中首次出现字符letter的地址，找
* 则返回该字符的指针，否则返回NULL。
* 输入参数：一个字符串(char类型的字符数组)和一个字符
* 输出参数：无
* 返 回 值: NULL和该字符的地址
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
char *Search(char *target,char letter);
int main()
{
    char source[] = {'a', 'b', 'c', 'd', 'e'};
    char AimLetter;
    printf("Please enter the target character you are looking for:");
    while (scanf("%c", &AimLetter)==1)
    {
        char *ch = Search(source, AimLetter);
        if (ch == NULL)
        {
            printf("The target character was not found in the string\n");
        }
        else
        {
            printf("%p\n", ch);
        }
        getchar();
        printf("Please enter the target character you are looking for:");
    }
    return 0;
}
char *Search(char *target,char letter)
{
    char *re=NULL;
    for (size_t i = 0; *target!='\0'; i++)
    {
         if(*target==letter)
         {
             re=target;
             return re;
         }
         target++;
    }
    return re;
}