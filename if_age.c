#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age < 0 || age > 150 ) {
        printf("Your age is not Valid\n");
        } 
    printf("Good bye\n");
    return 0;
}
