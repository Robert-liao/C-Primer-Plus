#include <stdio.h>
int main()
{
    char alphabet = 'F';
    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            printf("%c", alphabet - j);
        }
        printf("\n");
    }
    return 0;
}