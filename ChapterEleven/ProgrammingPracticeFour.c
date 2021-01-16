#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define ARRAYSIZE 256
void input(char *target,int size);
int main()
{
    char source[ARRAYSIZE]={};
    int size;
    printf("Please enter the maximum number of characters that can be read:");
    scanf("%d",&size);
    printf("Please enter a row of data:\n");
    input(source,size);
    printf("Array is :%s", source);
    return 0;
}
void input(char *target,int size)
{
    char ch;
    int count=0;
   while ((ch=getchar())!=EOF&&isspace(ch))  //读入输入并跳过第1个非空白字符前面的所有空白
   {
      continue;
   }
   if(ch==EOF)      
   {
       exit(0);
   }
   else
   {
       *target++=ch;
       count++;
   }
   while ((ch=getchar())!=EOF&&!isspace(ch))
   {
       *target++=ch;
       if(++count>=size)
       {
         break;
       }
   }
   *target='\0';
}