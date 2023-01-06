#include <stdio.h>
#define PI 3.1415926
double findRadius(double c);    //函数的声明 
double findArea(double r);
int main()
{
	double c,r,s;
	double Radius,Area;
	printf("Please input c:");
	scanf("%lf",&c);
    //函数的调用 
	Radius=findRadius(c);
	Area=findArea(Radius); 
	printf("The Radius is %lf\n,the result is %lf\n",Radius,Area);
	return 0;
}
//函数的定义
double findRadius(double m)   //求周长 
{
	return m/(2.0*PI);
}
double findArea(double r)    //求面积 
{
	return PI*r*r;
}
