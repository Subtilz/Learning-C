#include <stdio.h>

int main(int argc, char const *argv[])
{
    float weight, high, bmi;

    printf("Enter You weight :", weight);
    scanf("%f", &weight);

    printf("Enter Your high :", high);
    scanf("%f", &high);

    bmi = weight / (high * high);
    printf("You bmi is %.2f\n", bmi);

    if (bmi >= 18 && bmi <= 22)
    {
        printf("Good Shape\n");
    }
    printf("Good bye\n");
    return 0;
}
