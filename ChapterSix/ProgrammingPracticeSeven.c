/**********************************************
*File name:     ProgrammingPracticeSeven.c
*Description:   C primer plus 第六章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <string.h>
//函数功能：把一个读入一个字符数组中，然后倒序打印这个单词。
int main()
{
    char word[30];
    printf("Please enter a word:");
    scanf("%s", word);
    for (int i = strlen(word); i >= 0; i--)
    {
        printf("%c", word[i-1]);
    }
    return 0;
}