#include <stdio.h>
#include <string.h>
int main()
{
    char Nmae[10];
    printf("please enter your name:");
    scanf("%s", Nmae);
    int count = strlen(Nmae) + 3;
    printf("Your name is \"%s\"\n", Nmae);
    printf("Your name is \"%20s\"\n", Nmae);
    printf("Your name is \"%-20s\"\n", Nmae);
    printf("Your name is %*s\n", count,Nmae);
    return 0;
}