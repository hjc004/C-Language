/*分别输出整数部分和小数部分*/
#include <stdio.h>
int whole(double a);
double fracpart(double a);

int main()
{
	double a;
	while (scanf("%lf",&a)!=EOF)
	{
		//whole(a);             这两个函数调用格式是错误的，要么定义变量接收返回值，要么像这样 
		//fracpart(a);           直接放在printf()里面调用 (或者把函数定义类型改为void)
		printf("整数部分=%d,小数部分=%.2lf\n",whole(a),fracpart(a));
	}
}

int whole(double a)   //因为这里定义的是整型，所以直接返回就能得到整数部分
{ 
	return a; 
}

double fracpart(double a)
{
	double fracpart;
	fracpart=a-whole(a);  //这里可以用whole(a)再调用一次，也可以用(int)a强制转换为整型 
	return fracpart;      //定义了函数是可以在任意位置进行调用的 
}
