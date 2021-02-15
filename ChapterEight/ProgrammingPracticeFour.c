/**********************************************
*File name:     ProgrammingPracticeFour.c
*Description:   C primer plus 第八章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include<stdio.h>
#include<ctype.h>
/****************************************************
*函数的实现：在遇到EOF之前，将输入作为字符流读取。
*           程序将要报告平均每个单词的字母数(空白字符除外)
******************************************************/
int main()
{
    float CoungWords=0,CountLitter=0,warp=0;
    char ch;
    while ((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            CountLitter++;
        }
        if(ch==' ')
        {
            CoungWords++;
        }
        if (ch=='\n')
        {
            warp++;
        }
        
    }
    CoungWords++;
    printf("CoungWords=%.0f\tCountLitter=%.0f\taverage=%f\n",CoungWords+(warp-1),CountLitter,CountLitter/CoungWords);
    return 0;
}