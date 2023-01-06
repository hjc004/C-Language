#include <stdio.h>
#define PI 3.1415926
double findCude(double r,double h);
int main()
{
	double r,h;
	double v;
	scanf("%lf%lf",&r,&h);
	v=findCude(r,h);
	printf("%.2lf",v);
	return 0;
}
double findCude(double r,double h)
{
	double v;
	v=PI*r*r*h;
	return v;
}
