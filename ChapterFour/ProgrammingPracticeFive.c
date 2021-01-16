#include <stdio.h>
int main()
{
    float Speed, FileSize;
    printf("Please enter download speed(Mb/S):");
    scanf("%f", &Speed);
    printf("\nPlease enter file size(MB):");
    scanf("%f", &FileSize);
    printf("\nAt %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds\n", Speed, FileSize, FileSize * 8 / Speed);
    return 0;
}