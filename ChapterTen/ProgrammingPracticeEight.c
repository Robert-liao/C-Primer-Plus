#include<stdio.h>
void copy_ptr(double *tareget,double *source,int number);
int main()
{
    double source[7]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    double target[3];
    copy_ptr(target,source+2,3);
    for (size_t i = 0; i < 3; i++)
    {
       printf("%.1lf ",target[i]);
    }
    return 0;
}
void copy_ptr(double *tareget,double *source,int number)
{
      for (size_t i = 0; i < number; i++)
      {
          *(tareget++)=*(source++);
      }      
}