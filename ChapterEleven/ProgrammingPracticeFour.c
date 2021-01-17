/**********************************************
*File name:     ProgrammingPracticeFour.c
*Description:   C primer plus 第十一章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-6
************************************************/
#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define ARRAYSIZE 256
/****************************************************
* 函 数 名：input
* 函数功能：读取size个字符进入target数组中。
* 输入参数：一个字符数组和最大读取的字符数。
* 输出参数：无
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
void input(char *target,int size);
int main()
{
    char source[ARRAYSIZE]={};
    int size;
    printf("Please enter the maximum number of characters that can be read:");
    scanf("%d",&size);
    printf("Please enter a row of data:\n");
    input(source,size);
    printf("Array is :%s", source);
    return 0;
}
/*******************************************************************
*函数实现：通过第一个循环读取数据并跳过第一个1个非空白字符前面的所有空白，
*循环结束后判断当前字符是否为EOF,是则程序退出。否则，将字符赋值给target数组
*然后通过循环将后续字符赋值给target数组直至EOF或遇见了空白字符。
*********************************************************************/
void input(char *target,int size)
{
    char ch;
    int count=0;
   while ((ch=getchar())!=EOF&&isspace(ch))  //读入输入,并跳过第1个非空白字符前面的所有空白
   {
      continue;
   }
   if(ch==EOF)      
   {
       exit(0);
   }
   else
   {
       *target++=ch;
       count++;
   }
   while ((ch=getchar())!=EOF&&!isspace(ch))
   {
       *target++=ch;
       if(++count>=size)
       {
         break;
       }
   }
   *target='\0';
}