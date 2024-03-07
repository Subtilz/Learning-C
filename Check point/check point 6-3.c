#include <stdio.h>

int main()
{
    int i;
    char name[40],id[20];

    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("Enter your ID: ");
    scanf("%s", &id);

    for ( i = 1; i <= 15; i++)
    {
        printf("%d. %s %s \n",i,name,id);
    }
    
    return 0;
}
