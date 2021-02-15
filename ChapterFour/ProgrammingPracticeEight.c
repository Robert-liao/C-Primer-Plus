/**********************************************
*File name:    ProgrammingPracticeEight.c
*Description:   C primer plus 第四章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
**********************************************/
#include<stdio.h>
#define GALLON 3.785
#define  MILE 1.609
//函数的功能：输入旅行的里程和消耗的汽油量，然后计算并显示消耗每加仑汽油行驶的英里数。
int main()
{
    float TripMileage,CounsumedGasoline;
    printf("Please enter the mileage of the trip(In miles):");
    scanf("%f",&TripMileage);
    printf("Please enter the amount of gasoline consumed(In gallons):");
    scanf("%f",&CounsumedGasoline);
    printf("%.1f miles per gallon consumed\n",TripMileage/CounsumedGasoline);
    printf("%.1f",TripMileage*1.609/CounsumedGasoline*3.785/100);//把单位是英里/加仑的值转换为升/100公里显示。
    return 0;
}