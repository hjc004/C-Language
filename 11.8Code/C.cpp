#include <stdio.h>
#define PI 3.1415926
double findRadius(double c);
double findArea(double r);
int main()
{
	double c,r,s;
	scanf("%lf",&c);
	r=findRadius(c);
	s=findArea(r);
	printf("%.2lf\n",s);
	return 0;
}
double findRadius(double c)
{
	double r;
	r=c/(2.0*PI);
	return r;
}
double findArea(double r)
{
	double s;
	s=PI*r*r;
	return s;
}
