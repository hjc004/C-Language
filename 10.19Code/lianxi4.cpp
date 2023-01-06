#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	while(scanf("%f%f%f",&a,&b,&c)!=EOF)
	{
	    if(a+b>c && a+c>b && b+c>a)
	    {
		    if((fabs(a-b)<=0.0001) || (fabs(a-c)<=0.0001) || (fabs(b-c)<=0.0001))
		        printf("Isosceles triangle\n");
		    else if((c*c==a*a+b*b) || (b*b==a*a+c*c) || (a*a==b*b+c*c))
		        printf("Right triangle\n");
		    else if((fabs(a-b)<=0.0001) || (fabs(a-c)<=0.0001) || (fabs(b-c)<=0.0001))
		    {
		    	if((c*c==a*a+b*b) || (b*b==a*a+c*c) || (a*a==b*b+c*c))
		    	    printf("Isosceles Right triangle\n");
		    	else
		    	    printf("Isosceles triangle\n");
			}
		    else if((fabs(a-b)<=0.0001) && (fabs(b-c)<=0.0001))
		        printf("Equilateral triangle\n");
	        else
	            printf("General triangle\n");
		}
	    else
	        printf("Not a triangle\n");
    }
    return 0;
}
