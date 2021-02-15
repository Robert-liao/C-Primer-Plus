/******************************************
*File name:ProgrammingPracticeThree.c
*Description:C primer plus 第九章课后编程3题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include<stdio.h>
/*****************************************************
*函数名：chline
*函数功能：以j行i列的方式打印ch字符
*输入参数：一个待打印字符(char类型)以及二维数组的维度
*输出参数：以j行i列的方式显示ch字符
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
void chline(char ch,int i,int j);
int main()
{
    char ch='C';
    int j=4,i=3;  //4行3列。
    chline(ch,i,j);
    return 0;
}
void chline(char ch,int i,int j)
{
    for (size_t k = 0; k < j; k++)
    {
        for (size_t h = 0; h < i; h++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    
}