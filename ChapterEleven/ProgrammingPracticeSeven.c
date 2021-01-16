#include <stdio.h>
#include <string.h>
#define ARRAYSIEZE 256
char *mystrncpy(char *target, char *source, int n);
int main()
{
    char s2[ARRAYSIEZE]={}, s1[ARRAYSIEZE]={};
    int n;
    printf("Please enter s1 string:");
    scanf("%s",s1);
    printf("Please enter s2 string:");
    scanf("%s",s2);
    printf("Please enter the number of characters to copy:");
    scanf("%d",&n);
    char *ss = NULL;
    ss = mystrncpy(s1, s2, n);
    printf("%s", ss);
    return 0;
}
char *mystrncpy(char *target, char *source, int n)
{
    char *Target = NULL;
    Target = target;
    while (*target != '\0')
    {
        target++;
        continue;
    }
    for (size_t i = 0; i < n; i++)
    {
        *target = source[i];
        target++;
    }
    if (strlen(source) < n)
    {
        *target = '\0';
    }
    return Target;
}