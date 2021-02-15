/**********************************************
*File name:     ProgrammingPracticeEighteen.c
*Description:   C primer plus 第六章课后编程18题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/************************************************************
*函数的实现：第N周少了N个朋友，剩下的朋友翻倍。程序循环报告每周朋友
*           的数量，直到数量超过了邓巴数(该值大约是150)
*************************************************************/
int main()
{
    int RabnudNumberFriends = 5, TemporaryVariables = 0;
    for (int week = 1;; week++)
    {
        TemporaryVariables = RabnudNumberFriends - week;
        RabnudNumberFriends = TemporaryVariables * 2;
        printf("week=%d\tNumberFriends=%d\n", week, RabnudNumberFriends);
        if (RabnudNumberFriends > 150)
        {
            break;
        }
    }
    return 0;
}