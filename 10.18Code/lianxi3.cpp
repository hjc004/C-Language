#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,x1,x2,dt;
    scanf("%lf%lf%lf",&a,&b,&c);
    dt=b*b-4.0*a*c;
    if(dt>0)
    {
	   x1=(-b+sqrt(dt))/(2.0*a);
       x2=(-b-sqrt(dt))/(2.0*a);
       printf("%.2lf %.2lf",x1,x2);
	}
	else if(dt==0)
	{
	   x1=(-b)/(2.0*a);
	   x2=(-b)/(2.0*a);
	   printf("%.2lf %.2lf",x1,x2);
    }
	else
	   printf("нч╫Б");
	return 0;
}
