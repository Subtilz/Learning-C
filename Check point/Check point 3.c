#include <stdio.h>
int main()
{
    char name[100];
    int high;
    long long std_id;
    float weight;


    printf("Please enter your name :");
    scanf("%s", &name);

    printf("Please enter your ID :");
    scanf("%lld", &std_id);

    printf("Please enter your weight(kg) :");
    scanf("%f", &weight);

    printf("Please enter your hight(cm) :");
    scanf("%d", &high);

    printf("name : %s last name : %s ID : %lld\n",name, std_id);
    printf("weight : %f hight : %d \n", weight, high);
    return 0;
}
