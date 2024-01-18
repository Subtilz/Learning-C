#include <stdio.h>

int main()
{
    int a = 2,b,c;
    b = ++a;
    printf("b= %d a=%d\n",b,a);
    c = b++;
    printf("b= %d c=%d\n",b,c);
    return 0;
}