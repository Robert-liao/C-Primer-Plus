#include<stdio.h>
int main(void)
{
    int count=0,sum=0,day;
    printf("Please enter day:");
    scanf("%d",&day);
    while (count++<day)
    {
        /* code */
        sum+=count;
    }
    printf("sum=%d\n",sum);
    return 0;
}