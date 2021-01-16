#include <stdio.h>
void copy_arr(double tareget[], double source[], int number);
void copy_ptr(double *tareget,double *source,int number);
void copy_ptrs(double *target,double *source,double *numble);
int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    for (size_t i = 0; i <5; i++)
    {
        printf("%g\t",target1[i]);
        printf("%g\t",target2[i]);
        printf("%g\t",target3[i]);
    }
    
    return 0;
}
void copy_arr(double tareget[], double source[], int number)
{
    for (size_t i = 0; i < number; i++)
    {
        tareget[i]=source[i];
    }
}
void copy_ptr(double *tareget,double *source,int number)
{
      for (size_t i = 0; i < number; i++)
      {
          *(tareget++)=*(source++);
      }      
}
void copy_ptrs(double *target,double *source,double *numble)
{
    for(;source<numble;)
    {
        *(target++)=*(source++);
    }
}