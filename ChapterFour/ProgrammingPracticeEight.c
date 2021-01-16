#include<stdio.h>
#define GALLON 3.785
#define  MILE 1.609
int main()
{
    float TripMileage,CounsumedGasoline;
    printf("Please enter the mileage of the trip(In miles):");
    scanf("%f",&TripMileage);
    printf("Please enter the amount of gasoline consumed(In gallons):");
    scanf("%f",&CounsumedGasoline);
    printf("%.1f miles per gallon consumed\n",TripMileage/CounsumedGasoline);
    printf("%.1f",TripMileage*1.609/CounsumedGasoline*3.785/100);
    return 0;
}