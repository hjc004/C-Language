#include <stdio.h>
void calc(float,float,float,float *,float *);

int main()
{
	float firstnum,secondnum,thirdnum,sum,product;
	printf("Enter three numbers: ");
	scanf("%f%f%f",&firstnum,&secondnum,&thirdnum);
	calc(firstnum,secondnum,thirdnum,&sum,&product);  //ǰ�����ǵ���ֵ���ݣ��������ǵ���ַ���� 
	printf("\nThe sum of three numbers is %6.2f",sum);
	printf("\nThe product of three numbers is %6.2f",product); 
	return 0;
}

void calc(float num1,float num2,float num3,float *sumaddr,float *proaddr)
{
	*sumaddr=num1+num2+num3;
	*proaddr=num1*num2*num3;
}
