#include<stdio.h>
int main()
{
    static char alphabet='A';
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
             printf("%c",alphabet++);
        }
        printf("\n");
    }
    return 0;
}