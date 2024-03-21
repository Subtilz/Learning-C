#include <stdio.h>
#include <math.h>
int main()
{
int x,y;
double a,z;
printf("Enter x: ");
scanf(" %d",&x);
printf("Enter y: ");
scanf(" %d",&y);
a = sqrt(pow(x,2) + pow(y,2))/(2*sqrt(y));
z = pow(y,3)-2*pow(x,2)+a;

printf("Result is %.2f",z);
return 0;
}