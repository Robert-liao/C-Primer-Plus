/**********************************************
*File name:     ProgrammingPracticeSix.c
*Description:   C primer plus 第十一章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-6
*********************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/****************************************************
* 函 数 名：Search
* 函数功能：接受一个字符和一个指向字符串的指针，若指定字符在
*          字符串中，函数返回1(真)，否则返回0(假)
* 输入参数：一个字符和一个指向字符串的指针
* 输出参数：无
* 返 回 值: 1或0
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
int  Search(char *target,char letter);
int main()
{
    char source[] = {'a', 'b', 'c', 'd', 'e'};
    char AimLetter;
    printf("Please enter the target character you are looking for:");
    while (scanf("%c", &AimLetter)==1)
    {
        if (Search(source,AimLetter)==0)
        {
            printf("The target character was not found in the string\n");
        }
        else
        {
            printf("The specified character is in the string\n");
        }
        getchar();
        printf("Please enter the target character you are looking for:");
    }
    return 0;
}
int  Search(char *target,char letter)
{
    for (size_t i = 0; *target!='\0'; i++)
    {
         if(*target==letter)
         {
             return 1;
         }
         target++;
    }
    return 0;
}