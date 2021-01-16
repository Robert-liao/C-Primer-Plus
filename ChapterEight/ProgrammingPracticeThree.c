#include <stdio.h>
#include <ctype.h>
int main()
{
    int CountLowerCaseLitters = 0, CountUppercaseLitters = 0;
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            CountLowerCaseLitters++;
        }
        else if(isupper(ch))
        {
            CountUppercaseLitters++;
        }
       
    }
    printf("CountLowerCaseLitters=%d,CountUppercaseLitters=%d\n",CountLowerCaseLitters,CountUppercaseLitters);
    return 0;
}