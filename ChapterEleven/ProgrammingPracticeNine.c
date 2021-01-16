#include<stdio.h>
#include<string.h>
#define SIZE 256
char *reverse(char *source);
int main()
{
    char Souce[SIZE];
    printf("Please enter a string:");
    while (1)
    {       
        scanf("%s",Souce);
        getchar();
        printf("The string you entered is:%s\n",Souce);
        reverse(Souce);
        printf("After the function conversion, the string you input is:%s\n",Souce);
        printf("Please re-enter a string:");
    }
    
    return 0;
}
char *reverse(char *source)  //通过一个中间临时变量数组实现字符串可逆
{
     char Temporary[SIZE];
     for (size_t i = 0; i < strlen(source); i++)
     {
         Temporary[i]=source[i];
     }
     int tem=strlen(Temporary);   
      for (size_t i = 0; i < strlen(source); i++)
     {      
         source[i]=Temporary[--tem];
     }
          return source;
}