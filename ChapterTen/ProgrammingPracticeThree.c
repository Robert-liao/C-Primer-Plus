#include<stdio.h>
int max(int source[],int ArraySize);
int main()
{
      int source[10]={3,23,34,234,555454,423412,324,34,5,234};
      printf("Max is %d",max(source,10));
}
int max(int source[],int ArraySize)
{
    int max=source[0];
    for (size_t i = 1; i <ArraySize; i++)
    {
          if (max<source[i])
          {
              max=source[i];
          }
    }
    return max;
}