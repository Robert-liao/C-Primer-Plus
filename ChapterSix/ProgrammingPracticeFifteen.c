#include<stdio.h>
#include<string.h>
int main()
{
    char string[255];
    printf("Please enter a line of English:");
    gets(string);
    for(int i=strlen(string);i>0;i--)
    {
        printf("%c",string[i-1]);
    }
    printf("\n");
    return 0;
}