#include <stdio.h>
void br();
void in();
int main()
{
    br();
    printf(",");
    in();
    printf("\nIndia,China,\n");
    printf("Brazil,Russia\n");
    return 0;
}
void br()
{
    printf("Brazil,Russia");
}
void in()
{
    printf("India,China");
}