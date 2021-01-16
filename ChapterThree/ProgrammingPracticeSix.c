#include<stdio.h>
#include<math.h>
int main()
{ 
    int Quart,Gram;
    printf("Please enter the number of quarts of water:\n");
    scanf("%d",&Quart);
    Gram=Quart*950;
    printf("The number of water molecules is:%.2lf\n",Gram/(3.0*pow(10,-23)));
    return 0;
}                                        