#include<stdio.h>
int main()
{
    float height;
    char name[10];
    printf("Please enter your height/inches and name:\n");
    scanf("%s",name);
    scanf("%f",&height);
    printf("%s,you are %.3f feet tall\n",name,height);
}