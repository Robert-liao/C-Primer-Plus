#include<stdio.h>
double max(double source[],int ArraySize);
int main()
{
      double source[10]={3.23,23.234,34.1,234.2,5454.234,423412.324,324.23,34.1,5,2};
      printf("MaxSubscript is %lf",max(source,10));
}
double max(double source[],int ArraySize)
{
    double max=source[0],min=source[0],Subscript=0;
    for (size_t i = 1; i <ArraySize; i++)
    {
          if (max<source[i])
          {
              max=source[i];
              Subscript=i;
          }
          if(min>source[i])
          {
              min=source[i];
          }
    }
    return max-min;
}