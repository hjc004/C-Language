#include <stdio.h>
#include <math.h>
double hypotenuse(double a,double b);
int main()
{
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	c=hypotenuse(a,b);
	printf("%.2lf\n",c);
	return 0;
}
double hypotenuse(double a,double b)
{
	double c,d;
	d=a*a+b*b;
	c=sqrt(d);
	return c;
}
