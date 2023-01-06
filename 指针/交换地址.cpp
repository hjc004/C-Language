/*交换地址*/
#include <stdio.h>
void swap(float *,float *);
int main()
{
	float num1,num2;
	printf("Enter two numbers: ");
	scanf("%f%f",&num1,&num2);
	printf("Before call swap(): \n");
	printf("num1=%f,num2=%f\n",num1,num2);
	
	swap(&num1,&num2);
	
	printf("After call swap(): \n");
	printf("num1=%f,num2=%f\n",num1,num2);
	return 0;
}
void swap(float *num1Addr,float *num2Addr)
{
	float temp;
	temp=*num1Addr;       //加*号表示变量地址中的值 
	*num1Addr=*num2Addr;
	*num2Addr=temp;
}
