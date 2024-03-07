#include <stdio.h>
#define num 20
int main()
{
    int i = 0 ;
    while (i<num)
    {
        int j=0;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf(" \n");
        i++;
    }
    return 0;
}
