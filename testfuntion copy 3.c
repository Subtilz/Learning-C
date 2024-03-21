#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double y;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    y = abs(pow(a, 2) - pow(b, 2)) / (2 * a);

    printf("Result is %.2f", y);
    return 0;
}
