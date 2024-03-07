#include <stdio.h>

int main()
{
    char name[50];
    float weight, high, bmi;

    printf("Enter Your name :", name);
    scanf("%s", &name);

    printf("Enter You weight :", weight);
    scanf("%f", &weight);

    printf("Enter Your high :", high);
    scanf("%f", &high);

    bmi = weight / (high * high);
    printf("bmi of %s is %.2f\n", name, bmi);

    if (bmi >= 15 && bmi <= 25)
    {
        printf("%s : Good Shape\n", name);
    }
    else
    {
        printf("%s :Ab normal Shape", name);
    }

    printf("Good bye\n");
    return 0;
}
