/******************************************
*File name:ProgrammingPracticeSeven.c
*Description:C primer plus 第九章课后编程7题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include<stdio.h>
/*****************************************************
*函数名：JudgementLitter
*函数功能：判断形参是否是字母，若是则报告该字母在字母表中的数值
*         位置，反之函数返回-1
*输入参数：char类型变量
*输出参数：无
*返回值：-1或该字母在字母表中的数值位置
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
int JudgementLitter(char ch);
int main()
{
    printf("Please enter a string of characters(End of eof(Ctrl Z)):\n");
    char ch;
    while ((ch=getchar())!=EOF)
    {
        printf("%d\t",JudgementLitter(ch));
    }
    
    return 0;
}
int JudgementLitter(char ch)
{
   char alphabet[26]={
       'a','b','c','d','e','f','g','h','i','j','k','l','m',
       'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (size_t i = 0; i < 26; i++)
    {
        if(ch==alphabet[i]||ch==(alphabet[i]-32))
        {
            return i+1;
        }
    }
    return -1;
    
}