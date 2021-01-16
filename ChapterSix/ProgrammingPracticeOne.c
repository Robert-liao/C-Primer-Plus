#include <stdio.h>
#include <string.h>
int main(void)
{
    char alphabet[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
        'i', 'g', 'k', 'l', 'm', 'n', 'o', 'p', 
        'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 
        'y', 'z'};
    for (int i = 0; i < strlen(alphabet); i++)
    {
        printf("%c ", alphabet[i]);
    }
    printf("\n");
    return 0;
}