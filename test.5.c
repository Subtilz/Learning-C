#include <stdio.h>
int main()
{
    char name[100];
    int salary;
    printf("Enter your name : ");
    scanf("%s", &name);

    printf("Plese enter your salary : ");
    scanf("%d", &salary);

    printf("%s gets %d\n", name, salary);
    return 0;
}
