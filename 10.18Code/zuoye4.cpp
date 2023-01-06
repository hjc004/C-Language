#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    	if(fabs(a-b)<=0.0001 || fabs(a-c)<=0.0001 || fabs(b-c)<=0.0001)
	       printf("Isosceles triangle");
	    else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
	       printf("Right triangle");
	    else if((a==b || a==c || b==c) && (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a))
	       printf("Isosceles Right triangle");
	    else if(a==b && a==c)
	       printf("Equilateral triangle");
	}
	else
	    printf("Not a triangle");
	return 0;
}
