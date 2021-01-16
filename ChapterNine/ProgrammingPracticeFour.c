#include<stdio.h>
double HarmonicMean(double x,double y);
int main()
{
    double one ,two;
    printf("Please enter two floating point numbers:");
    scanf("%lf,%lf",&one,&two);
    printf("Harmonic mean=%lf\n",HarmonicMean(one,two));
    return 0;
}
double HarmonicMean(double x,double y)
{
        return 1/((1/x+1/y)/2);
  
}