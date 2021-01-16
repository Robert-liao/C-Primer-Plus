#include <stdio.h>
void jolly();
void deny();
int main()
{
    jolly();
    deny();
    return 0;
}
void jolly()
{
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("For he's a jolly good fellow!\n");
    }
}
void deny()
{
    printf("Which nobody can deny!\n");
}