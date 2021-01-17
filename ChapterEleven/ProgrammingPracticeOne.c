/**********************************************
*File name:     ProgrammingPracticeOne.c
*Description:   C primer plus 第十一章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-5
************************************************/
#include <stdio.h>
#include <string.h>
#define ARRAYSIZE 256
/****************************************************
* 函 数 名：input
* 函数功能：从输入中读取n个字符后停止
* 输入参数：一个字符数组
* 输出参数：无
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
void input(char *target,int n);
int main()
{
    char source[ARRAYSIZE];
    int n;
    printf("Please enter the size of n:");
    scanf("%d",&n);
    getchar();
    printf("Please write content into the array (end of EOF):\n");
    input(source,n);
    printf("Array is :\n");
    for (size_t i = 0; i < strlen(source); i++)
    {
        if (source[i] == '\n') //换行
        {
            printf("source[%d]=", i);
            printf("wrap");
            putchar('\n');
        }
        else if (source[i] == '\t') //水平制表符
        {
            printf("source[%d]=", i);
            printf("Tabs");
            putchar('\n');
        }
        else if (source[i] == ' ') //空白
        {
            printf("source[%d]=", i);
            printf("Space");
            putchar('\n');
        }
        else //字符
        {
            printf("source[%d]=", i);
            printf("%c", source[i]);
            putchar('\n');
        }
    }
    return 0;
}
void input(char *target,int n)
{
    char ch;
    for (size_t i = 0;i<n; i++)
    {
        ch = getchar();
        target[i] = ch;
    }
}