#include <stdio.h>
#include <math.h>
float get_bmi(float w, float h); 
int main()
{
    float WEIGH, HIGH, bmi;
    printf("Enter weigh: ");
    scanf("%f", &WEIGH);
    printf("Enter high: ");
    scanf("%f", &HIGH);

    bmi = get_bmi(WEIGH, HIGH);     
    printf("BMI is %f\n", bmi);

    return 0;
}

float get_bmi(float w, float h)
{
    float BMI;
    BMI = w / pow(h,2);
    return BMI;
}
