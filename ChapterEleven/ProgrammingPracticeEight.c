#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define STRINGSIZE 256
char *string_in(char *s1, char *s2);
int main()
{
    char S1[STRINGSIZE], S2[STRINGSIZE];
    while (1)
    {
        printf("Please enter the string S1:");
        scanf("%s", S1);
        getchar();
        printf("Please enter the string S1:");
        scanf("%s", S2);
        getchar();
        char *address=string_in(S1, S2);
        if ( address== NULL)
        {
            printf("s1 does not contain s2\n");
        }
        else
        {
            printf("s1 contains s2, the address is:%p \n",address);
        }
    }

    return 0;
}
char *string_in(char *s1, char *s2)
{
    int S2length=strlen(s2);
    char Temporary[S2length]; 
    while (*s1!='\0')
    {
        char *T=NULL;
        T=strncpy(Temporary,s1,S2length);  //返回临时数组的地址
        int tem=strcmp(Temporary,s2);
       if(tem==0)
       {
              return s1;   //返回字符串S1中第一次出现串2字符的哪个的地址。
       }
       s1+1;                                                                                                                                                                                                                                                                                                                         s1++;
    }    
    return NULL;
}