/**********************************************
*File name:     ProgrammingPracticeThree.c
*Description:   C primer plus 第十一章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-6
************************************************/
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ARRAYSIZE 256
/****************************************************
* 函 数 名：input
* 函数功能：从一行输入中把一个单词读入一个数组，并丢弃输入行
*          中的其余字符。同时跳过第1个非空白字符前面的所有空白
* 输入参数：一个字符数组
* 输出参数：无
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
void input(char *target);
int main()
{
    char source[ARRAYSIZE] = {};
    printf("Please enter a row of data:\n");
    input(source);
    printf("Array is :%s", source);
    return 0;
}
void input(char *target)
{
    char ch;
    while ((ch = getchar()) != EOF && isspace(ch)) //读入输入并跳过第1个非空白字符前面的所有空白
    {
        continue;
    }
    if (ch == EOF) //当上一个循环结束时，说明两种情况。碰见了EOF或者非空白字符。进行判断，若是EOF，程序退出，反之将字符赋给数组。
    {
        exit(0);
    }
    else
    {
        *target++ = ch;
    }
    while ((ch = getchar()) != EOF && !isspace(ch)) //开始读取单词字母，并将其赋给数组。当循环退出时，说明了碰见了EOF或是重新遇到了空白字符
    {                                               //此时，直接给数组赋值 ‘\0’ 跳过后面的内容，程序返回。
        *target++ = ch;
    }
    *target = '\0';
}