#include <stdio.h>
int main()
{
    int choice;
    float base, high, area;

    printf("\tMAIN MENU\n");
    printf("==============================\n\n");
    printf("\t1.TRIANGLE\n");
    printf("\t2.RECTANGLE\n\n");
    printf("==============================\n\n");

    printf("Please select your choice. (1..2): ");
    scanf("%d", &choice);
    printf("\n\n");

    switch (choice)
    {
    case 1:
        printf("Enter base: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &high);
        printf("\n\n");
        area = 1.0 / 2.0 * base * high;
        printf("Triangle area = %.2f\n", area);
        break;

    case 2:
        printf("Enter width: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &high);
        printf("\n\n");
        area = base * high;
        printf("Rectangle area = %.2f\n", area);
        break;

    default:
        printf("Your choice incorrect\n");
    }

    return 0;
}
