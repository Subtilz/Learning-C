#include <stdio.h>
float get_volt(float I, float R); //*funtion prototype
int main()
{
    float i, r, v;
    printf("Enter I: ");
    scanf("%f", &i);
    printf("Enter R: ");
    scanf("%f", &r);

    v = get_volt(i, r);     //TODO เรียกใช้ฟังชั่น
    printf("Voltage is %f\n", v);

    return 0;
}

float get_volt(float I, float R) //!function definition
{
    float V;
    V = I * R;
    return V;
}
