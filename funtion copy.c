#include <stdio.h>
void get_fx(int x);
int main()
{
    int first, second, third, fourth, fifth, sixth;

    printf("\n F(X) = 3X + 10 if X > 0\n");
    printf("\n F(X) = 10 if X = 0\n");
    printf("\n Enter 6 values\n");

    scanf("%d %d %d %d %d %d", &first, &second, &third, &fourth, &fifth, &sixth);
    get_fx(first);
    get_fx(second);
    get_fx(third);
    get_fx(fourth);
    get_fx(fifth);
    get_fx(sixth);
    
    return 0;
}

void get_fx(int x)
{
    if (x > 0)
        printf("F(%d) is %d\n", x, 3 * x + 10);
    else
        printf("F(%d) is 10\n", x);
}