#include<stdio.h>
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