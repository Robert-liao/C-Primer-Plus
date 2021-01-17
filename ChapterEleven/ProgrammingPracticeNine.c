/**********************************************
*File name:     ProgrammingPracticeNine.c
*Description:   C primer plus 第十一章课后编程9题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-10
*********************************************/
#include<stdio.h>
#include<string.h>
#define SIZE 256  //数组的大小
/****************************************************
* 函 数 名：reverse
* 函数功能：把字符串的内容用其反序字符串代替。
* 输入参数：一个字符串(char类型的字符数组)
* 输出参数：无
* 返 回 值: 字符串的地址(char *)
* Author ： Robert
* Create Time: 2021-1-10
* 其他说明：无
* 修改说明：无
*****************************************************/
char *reverse(char *source);
int main()
{
    char Souce[SIZE],ch;
    printf("Please enter a string:");
    while (1)
    {       
        scanf("%s",Souce);
        getchar();
        printf("The string you entered is:%s\n",Souce);
        reverse(Souce);
        printf("After the function conversion, the string you input is:%s\n",Souce);
        printf("Please decide whether to continue YES(y) or NO(N)\n");
        scanf("%c",&ch);
        getchar();
        if(ch=='N')
        {
            break;
        }
        printf("Please re-enter a string:");
    }
    
    return 0;
}
/***********************************************
*函数的实现：通过一个中间临时变量数组实现字符串可逆。
************************************************/
char *reverse(char *source)
{
     char Temporary[SIZE];
     for (size_t i = 0; i < strlen(source); i++)
     {
         Temporary[i]=source[i];
     }
     int tem=strlen(Temporary);   
      for (size_t i = 0; i < strlen(source); i++)
     {      
         source[i]=Temporary[--tem];
     }
          return source;
}