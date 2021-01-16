#include<stdio.h>
#define WEEK 7
int main()
{
    int day;
    while (1)
    {
        printf("Please enter the number of days:");
        scanf("%d",&day);
        if(day<=0)
        {
            printf("The number of days you entered is illegal and the program has exited");
            break;
        }
        printf("%d day are %d weeks,%d days.\n",day,day/WEEK,day%WEEK);
    }  
    return 0;
}