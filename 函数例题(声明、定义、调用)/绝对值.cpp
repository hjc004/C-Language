#include <stdio.h>
double myAbs(double a);             //����������
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
//�����Ķ���,���������ֵ 
double myAbs(double a)
{
	if(a>=0)
	   return a;
	else
	   return 0-a;
}
