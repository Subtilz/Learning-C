#include <stdio.h>

int main()
{
    float weight , high , bmi;

    printf("Enter You weight :", weight);
    scanf("%f",&weight);

    printf("Enter Your high :", high);
    scanf("%f",&high);

    bmi =  weight / (high*high);

    printf("You bmi is %.2f\n", bmi);
    return 0;
}
