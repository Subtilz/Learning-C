#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter number X?: ");
    scanf("%d",&x);
    printf("Enter number y?: ");
    scanf("%d",&y);

    printf("x+y is %d\n",x+y);
    printf("x-y is %d\n",x-y);
    printf("x*y is %d\n",x*y);
    printf("(x+y)+y is %d\n",(x+y)+y);
    printf("(x-y)+x is %d\n",(x-y)+x);
    printf("(x+y)*(x-y) is %d\n",(x+y)*(x-y));

    return 0;
}
