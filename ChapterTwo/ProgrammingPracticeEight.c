#include <stdio.h>
void ont_three();
void two();
int main()
{
    printf("starting now:\n");
    ont_three();
    printf("done!\n");
    return 0;
}
void ont_three()
{
    printf("one\n");
    two();
    printf("three\n");
}
void two()
{
    printf("two\n");
}