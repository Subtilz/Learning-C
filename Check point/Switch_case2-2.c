#include <stdio.h>
int main()
{
    int choice, x, y;

    printf("\tMAIN MENU\n");
    printf("##############################\n\n");
    printf("\t1.ADD\n");
    printf("\t2.SUB\n");
    printf("\t3.MUL\n");
    printf("\t4.DIV\n");
    printf("\t5.MOD\n\n");
    printf("##############################\n\n");

    printf("Please select your choice. (1..5): ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        printf("===== ADD =====\n\n");
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("Enter Number: ");
        scanf("%d", &y);
        printf("\n");
        printf("%d + %d is %d \n", x, y, x + y);
        break;
    case 2:
        printf("===== SUB =====\n\n");
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("Enter Number: ");
        scanf("%d", &y);
        printf("\n");
        printf("%d - %d is %d \n", x, y, x - y);
        break;
    case 3:
        printf("===== MOL =====\n\n");
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("Enter Number: ");
        scanf("%d", &y);
        printf("\n");
        printf("%d * %d is %d \n", x, y, x * y);
        break;
    case 4:
        printf("===== DIV =====\n\n");
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("Enter Number: ");
        scanf("%d", &y);
        printf("\n");
        printf("%d / %d is %d \n", x, y, x / y);
        break;
    case 5:
        printf("===== DIV =====\n\n");
        printf("Enter Number: ");
        scanf("%d", &x);
        printf("Enter Number: ");
        scanf("%d", &y);
        printf("\n");
        printf("%d %% %d is %d \n", x, y, x % y);
        break;

    default:
        printf("Your choice incorrect\n");
    }
    printf("Good bye");

    return 0;
}
