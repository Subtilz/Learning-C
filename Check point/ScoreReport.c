#include <stdio.h>
int main()
{
    int score, group;
    printf("Enter your score (0 - 20): ");
    scanf("%d", &score);
    group = score / 4;

    switch (group)
    {
    case 5:
        printf("Very Good \n");
        break;
    case 4:
        printf("Good \n");
        break;
    case 3:
        printf("Fair \n");
        break;
    case 2:
        printf("Poor \n");
        break;
    case 0:
    case 1:
        printf("Fail \n");
        break;
    default:
        printf("Out of range");
        break;
    }
    return 0;
}
