#include <stdio.h>

int main()
{
    int i,j;

    printf("Enter your number: ");
    scanf("%d", &j);

    for ( i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",j,i,j*i);
    }
    
    return 0;
}
