#include<stdio.h>
double min(double x,double y);
int main()
{
    double one ,two;
    printf("Please enter two numbers:\n");
    scanf("%lf,%lf",&one,&two);
    printf("firstNumbert=%lf,secondNumber=%lf,min=%lf",one,two,min(one,two));
    return 0;
}
double min(double x,double y)
{
    return x<y?x:y;
}