/**********************************************
*File name:     ProgrammingPracticeEight.c
*Description:   C primer plus 第十一章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-7
*********************************************/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define STRINGSIZE 256 
/****************************************************
* 函 数 名：string_in
* 函数功能：接受两个指向字符串的指针作为参数。若第2个字符串
*          包含在第一个字符串中，函数返回第1个字符串开始的
*          地址。若不存在，函数返回NULL
* 输入参数：两个指向字符串的指针(char *)
* 输出参数：无
* 返 回 值: NULL或是串1中串2开始的地址
* Author ： Robert
* Create Time: 2021-1-7
* 其他说明：无
* 修改说明：无
*****************************************************/
char *string_in(char *s1, char *s2);
int main()
{
    char S1[STRINGSIZE], S2[STRINGSIZE];
    while (1)
    {
        printf("Please enter the string S1:");
        scanf("%s", S1);
        getchar();
        printf("Please enter the string S1:");
        scanf("%s", S2);
        getchar();
        char *address=string_in(S1, S2);
        if ( address== NULL)
        {
            printf("s1 does not contain s2\n");
        }
        else
        {
            printf("s1 contains s2, the address is:%p \n",address);
        }
    }

    return 0;
}
/***********************************************
*函数的实现：利用strncpy函数将s1按照s2的长度进行截取，
*将返回的地址赋值给一个临时的数组。再利用strcmp函数比较该
*临时数组与s2是否相同，相同则返回地址，否则s1地址向后移位，
*再重复之前的步骤，直至s1的末尾字母\n。
************************************************/
char *string_in(char *s1, char *s2)
{
    int S2length=strlen(s2);
    char Temporary[S2length]; 
    while (*s1!='\0')
    {
        char *T=NULL;
        T=strncpy(Temporary,s1,S2length);  //返回临时数组的地址
        int tem=strcmp(Temporary,s2);
       if(tem==0)
       {
              return s1;   //返回字符串S1中第一次出现串2字符的哪个的地址。
       }
       s1+1;                                                                                                                                                                                                                                                                                                                         s1++;
    }    
    return NULL;
}