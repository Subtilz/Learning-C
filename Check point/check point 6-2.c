#include <stdio.h>

int main()
{
    int i=1,j;

    printf("Enter your number: ");
    scanf("%d", &j);
    
    while (i <= 12)
    {
        printf("%d x %d = %d\n",j,i,j*i);
        i++;
    }
    return 0;
}
