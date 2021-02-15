/******************************************
*File name:ProgrammingPracticeEleven.c
*Description:C primer plus 第九章课后编程11题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include<stdio.h>
/*****************************************************
*函数名：PrintFibonacci
*函数功能：打印指定项数的斐波那契额数列。
*输入参数：一个int类型
*输出参数：斐波那契数列
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
void PrintFibonacci(int n);
/*****************************************************
*函数名：PlusFibonaccie
*函数功能：计算指定项数的斐波那契额数列总和
*输入参数：一个int类型
*输出参数：指定项数的斐波那契额数列总和
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
void PlusFibonaccie(int n); 
int main()
{
    int n;
    printf("Please enter the number of printed items:");
    scanf("%d",&n);
    PrintFibonacci(n);
    PlusFibonaccie(n);
    return 0;
}
void PrintFibonacci(int n)  
{
    unsigned long  fib1=0,fib2=1,TemporaryVariable,count=0;
     for (size_t i = 0; i < n; i++)
     {
        printf("%lu\t",fib1);
        count++;
        TemporaryVariable=fib1+fib2;
        fib1=fib2;
        fib2=TemporaryVariable;
       if (count%10==0)
       {
           putchar('\n');
       }      
     }  
}
void PlusFibonaccie(int n)
{
    unsigned long SUM=0,fib1=0,fib2=1,TemporaryVariable;
    for (size_t i = 0; i < n; i++)
    {
        SUM+=fib1;
        TemporaryVariable=fib1+fib2;
        fib1=fib2;
        fib2=TemporaryVariable;
    }
    printf("%lu",SUM);
}