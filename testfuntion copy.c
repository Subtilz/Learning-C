#include <stdio.h>
#include <math.h>
int main()
{
    double x=10.0 , y = 1.0;
    do
    {
        printf("%.2f\n",pow(x,y));
        y++;
    } while (y < 6);
    return 0;
}