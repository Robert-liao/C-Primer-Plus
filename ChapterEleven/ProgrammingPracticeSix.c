#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int  Search(char *target,char letter);
int main()
{
    char source[] = {'a', 'b', 'c', 'd', 'e'};
    char AimLetter;
    printf("Please enter the target character you are looking for:");
    while (scanf("%c", &AimLetter)==1)
    {
        if (Search(source,AimLetter)==0)
        {
            printf("The target character was not found in the string\n");
        }
        else
        {
            printf("The specified character is in the string\n");
        }
        getchar();
        printf("Please enter the target character you are looking for:");
    }
    return 0;
}
int  Search(char *target,char letter)
{
    for (size_t i = 0; *target!='\0'; i++)
    {
         if(*target==letter)
         {
             return 1;
         }
         target++;
    }
    return 0;
}