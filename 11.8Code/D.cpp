#include <stdio.h>
#include <math.h>
double myAbs(double a);
int main()
{
	double a;
	scanf("%lf",&a);
	a=myAbs(a);
	printf("%lf\n",a);
	return 0;
}
double myAbs(double a)
{
	if (a >= 0)
	{
		return a;
	}
	if (a < 0)
	{
		a=-a;
		return a;
	}
	return a;
}
