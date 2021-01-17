/**********************************************
*File name:     ProgrammingPracticeTen.c
*Description:   C primer plus 第十一章课后编程10题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-10
*********************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 256  //数组的大小
/****************************************************
* 函 数 名：RevisionString
* 函数功能：删除字符串中空格
* 输入参数：一个字符串(char类型的字符数组)
* 输出参数：删除字符串中空格后的内容(char类型数组)
* 返 回 值: void 
* Author ： Robert
* Create Time: 2021-1-10
* 其他说明：无
* 修改说明：无
*****************************************************/
void RevisionString(char *source);
int main()
{
    char source[SIZE];
    printf("Please enter a string:");
    while (fgets(source, SIZE, stdin)) 
    {
        if(source[0]==' '&&source[0]=='\n') //当字符串的第一个字符是空格或是换行，则认为该字符串是空行。程序退出
        {
            printf("You enter a blank line, the program exits\n");
            break;
        }
        RevisionString(source); //删除字符串中的空格
        printf("%s", source);   //输出内容
        printf("Please re-enter a string:");
    }
    return 0;
}
/***********************************************
*函数的实现：通过一个临时的变量充作下标从0开始重新将
*字符串的内容赋值一遍，遇到空格时跳过。
************************************************/
void RevisionString(char *source) //处理字符串中的空格。
{
    int temporary = 0;
    for (size_t i = 0; i < strlen(source); i++)
    {
        if (source[i] == ' ')
            continue;
        source[temporary++] = source[i];
    }
    source[temporary] = '\0';
}