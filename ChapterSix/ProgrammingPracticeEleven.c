/**********************************************
*File name:     ProgrammingPracticeEleven.c
*Description:   C primer plus 第六章课后编程11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/****************************************************
*函数的实现：在数组中读取8个整数，然后按倒序打印这8个整数。
*****************************************************/
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