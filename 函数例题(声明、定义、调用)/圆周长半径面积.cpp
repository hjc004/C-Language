#include <stdio.h>
#define PI 3.1415926
double findRadius(double c);    //���������� 
double findArea(double r);
int main()
{
	double c,r,s;
	double Radius,Area;
	printf("Please input c:");
	scanf("%lf",&c);
    //�����ĵ��� 
	Radius=findRadius(c);
	Area=findArea(Radius); 
	printf("The Radius is %lf\n,the result is %lf\n",Radius,Area);
	return 0;
}
//�����Ķ���
double findRadius(double m)   //���ܳ� 
{
	return m/(2.0*PI);
}
double findArea(double r)    //����� 
{
	return PI*r*r;
}
