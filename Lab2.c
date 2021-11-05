#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
double a,b,h,x,y;
printf ("a= ");
scanf ("%lf", &a);
printf ("b= ");
scanf ("%lf", &b);
printf ("h= ");
scanf ("%lf", &h);
for (x=a; x<=b; x+=h)
{
if (x<=7)
y= log10(x * log(x) + sin(x));
else if (x<8)
y= log(sin(x) + 4) / log(3);
else if (x>=8)

y= 1 / (16 + (1 / cos(x)));

printf ("x=%f\t y=%f\n", x,y);

}
system("pause");
return 0;
}