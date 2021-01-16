#include<stdio.h>
void PrintFibonacci(int n);   //打印指定项数的斐波那契额数列。
void PlusFibonaccie(int n); //计算指定项数的斐波那契额数列总和
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