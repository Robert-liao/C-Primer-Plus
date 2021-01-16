#include<stdio.h>
int main()
{
    int valume[8];
    printf("Please read 8 integers into the array:");
    for (int  i = 0; i < 8; i++)
    {
        /* code */
        scanf("%d",&valume[i]);//可以用回车和换行两种方式进行分隔输入的整数。
    }
    for (int i = 7; i>=0; i--)
    {
        /* code */
        printf("%d ",valume[i]);
    }
    
    
    return 0;
}