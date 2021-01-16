#include <stdio.h>
#include <string.h>
int main()
{
    char word[30];
    printf("Please enter a word:");
    scanf("%s", word);
    for (int i = strlen(word); i >= 0; i--)
    {
        printf("%c", word[i-1]);
    }
    return 0;
}