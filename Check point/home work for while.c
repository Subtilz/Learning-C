#include <stdio.h>

int main()
{
    int n;
    float score, avg, sum;

    n = 1;
    sum = 0;
    do
    {
        printf("Score of st %d : ", n);
        scanf("%f", &score);
        sum = sum + score;
        n++;

    } while (n <= 10);

    avg = sum / 10.0;

    printf("Class average is % .2f",avg);
    return 0;
}
