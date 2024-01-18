#include <stdio.h>

int main()
{
    int x,y;
    
    printf("Please Enter X: \a",x);
    scanf("%d",&x);
    printf("Please Enter y: \a",y);
    scanf("%d",&y);

    printf("%d\t%d\t%d\t%d \n",x+y,y+x,x-y,y-x);
    printf("%d\t%d\t%d\t%d \n",x*y,y*x,x/y,y/x);
    printf("%d\t%d\t%d\t%d \n",x%y,y%x,x*y+x,x*(y+x));
    return 0;
}
