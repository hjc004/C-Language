#include <stdio.h>
double calc(double a,double b,char ch);
int main()
{
	double a,b,r;
	char ch;
	scanf("%d%d%c",&a,&b,&ch);
	r=calc(a,b,ch);
	printf("%.2lf\n",r);
	return 0;
}

double calc(double a,double b,char ch)
{
	if (ch==42)
	    return a*b;
	else if (ch==43)
	    return a+b;
	else if (ch==45)
	    return a-b;
	else if (ch==47)
	    return a/b;
}
