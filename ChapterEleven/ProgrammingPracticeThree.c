#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ARRAYSIZE 256
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