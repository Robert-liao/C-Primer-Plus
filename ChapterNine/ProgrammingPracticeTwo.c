#include<stdio.h>
void chline(char ch,int i,int j);
int main()
{
    char ch='A';
    int j=4,i=3;  //4行3列。
    chline(ch,i,j);
    return 0;
}
void chline(char ch,int i,int j)
{
    for (size_t k = 0; k < j; k++)
    {
        for (size_t h = 0; h < i; h++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    
}