/**********************************************
*File name:     ProgrammingPracticeNine.c
*Description:   C primer plus 第七章课后编程9题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/**********************************************************
*函数的实现：程序只接受正整数，然后显示所有小于或等于改数的素数。
***********************************************************/
int main()
{
    int value,flag,i,j;
    printf("Please enter a positive integer:");
    scanf("%d",&value);
    for( i=2;i<=value;i++)
    {
        for( j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}