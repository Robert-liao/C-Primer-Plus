#include <stdio.h>
#include<string.h>
int main()
{
    char c;
    int SpaceNumber = 0, Wrap = 0, Ohteralphabet = 0;
    while ((c = getchar()) != '#')
    {
        /* code */
        if (c == ' ')
        {
            SpaceNumber++;
        }
        if (c == '\n')
        {
            Wrap++;
        }
        else
        {
            Ohteralphabet++;
        }
    }
    printf("SpaceNumber=%d,Wrap=%d,Ohteralphabet=%d\n", SpaceNumber, Wrap, Ohteralphabet);
    return 0;
}