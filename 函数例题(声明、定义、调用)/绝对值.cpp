#include <stdio.h>
double myAbs(double a);             //函数的声明
int main()
{
	double abs;
	double result;
	printf("Please input abs value:");
	scanf("%lf",&abs);
	result=myAbs(abs);
	printf("The abs value is %lf\n",result);
	return 0;
 } 
//函数的定义,用来求绝对值 
double myAbs(double a)
{
	if(a>=0)
	   return a;
	else
	   return 0-a;
}
