#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,dt,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	dt=b*b-4*a*c;
	if(dt>0)
	{
		x1=(-b+sqrt(dt))/(2*a);
		x2=(-b-sqrt(dt))/(2*a);
		printf("%.2lf %.2lf",x1,x2);
	}
	else if(dt==0)
	{
		x1=(-b)/(2*a);
		x2=(-b)/(2*a);
		printf("%.2lf %.2lf",x1,x2);
	}
	else
	printf("нч╫Б");
}
