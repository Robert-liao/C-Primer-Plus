#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *search(char *target, char letter);
char *Search(char *target,char letter);
int main()
{
    char source[] = {'a', 'b', 'c', 'd', 'e'};
    char AimLetter;
    printf("Please enter the target character you are looking for:");
    while (scanf("%c", &AimLetter)==1)
    {
        char *ch = Search(source, AimLetter);
        if (ch == NULL)
        {
            printf("The target character was not found in the string\n");
        }
        else
        {
            printf("%p\n", ch);
        }
        getchar();
        printf("Please enter the target character you are looking for:");
    }
    return 0;
}
char *search(char *target, char letter)
{
    char *re;
    re = strchr(target, letter);
    return re;
}
char *Search(char *target,char letter)
{
    char *re=NULL;
    for (size_t i = 0; *target!='\0'; i++)
    {
         if(*target==letter)
         {
             re=target;
             return re;
         }
         target++;
    }
    return re;
}