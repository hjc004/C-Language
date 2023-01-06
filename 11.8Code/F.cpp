#include <stdio.h>
int whole(double a);
double fracpart(double a);
int main()
{
	double a;
	scanf("%lf",&a);
	printf("整数部分=%d,小数部分=%.2lf\n",whole(a),fracpart(a));
	return 0; 
}
int whole(double a)
{
	int whole;
	whole=a / 1;
	return whole;
}
double fracpart(double a)
{
	int whole;
	double fracpart;
	whole=a / 1;
	fracpart=a - whole;
	return fracpart;
}
