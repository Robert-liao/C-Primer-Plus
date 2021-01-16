#include<stdio.h>
#include<ctype.h>
int main()
{
    float CoungWords=0,CountLitter=0,warp=0;
    char ch;
    while ((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            CountLitter++;
        }
        if(ch==' ')
        {
            CoungWords++;
        }
        if (ch=='\n')
        {
            warp++;
        }
        
    }
    CoungWords++;
    printf("CoungWords=%.0f\tCountLitter=%.0f\taverage=%f\n",CoungWords+(warp-1),CountLitter,CountLitter/CoungWords);
    return 0;
}