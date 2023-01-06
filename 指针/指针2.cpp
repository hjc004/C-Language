#include <stdio.h>
void newval(float *);

int main()
{
	float testval;
	printf("Please enter a number: ");
	scanf("%f",&testval);
	printf("The address that will be passed is %u\n",&testval);
	newval(&testval);    //调用函数进行单项址传递,前面声明了指针，这里调用函数要加上地址符 
	return 0;
}

void newval(float *num)
{
	printf("The address received is %u:\n",num);
	printf("The value pointed to by num is %5.2f\n",*num);
 } 
