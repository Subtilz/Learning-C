#include <stdio.h>

int main()
{
    int first, second, third, fourth, fifth, sixth;

    printf("\n F(X) = 3X + 10 if X > 0\n");
    printf("\n F(X) = 10 if X = 0\n");
    printf("\n Enter 6 values\n");

    scanf("%d %d %d %d %d %d", &first, &second, &third, &fourth, &fifth, &sixth);

    if (first > 0)
        printf("F(%d) is %d\n", first, 3 * first + 10);
    else
        printf("F(%d) is 10\n", first);

    if (second > 0)
        printf("F(%d) is %d\n", second, 3 * second + 10);
    else
        printf("F(%d) is 10\n", second);

    if (third > 0)
        printf("F(%d) is %d\n", third, 3 * third + 10);
    else
        printf("F(%d) is 10\n", third);

    if (fourth > 0)
        printf("F(%d) is %d\n", fourth, 3 * fourth + 10);
    else
        printf("F(%d) is 10\n", fourth);

    if (fifth > 0)
        printf("F(%d) is %d\n", fifth, 3 * fifth + 10);
    else
        printf("F(%d) is 10\n", fifth);

    if (sixth > 0)
        printf("F(%d) is %d\n", sixth, 3 * sixth + 10);
    else
        printf("F(%d) is 10\n", sixth);
        

    return 0;
}
