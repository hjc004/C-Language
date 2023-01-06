#include <stdio.h>
void newval(float *);

int main()
{
	float testval;
	printf("Please enter a number: ");
	scanf("%f",&testval);
	printf("\nFrom main():The value in testval is %5.2f\n",testval);
	newval(&testval); 
	printf("\nFrom main():The value in testval has been changed to:%5.2f",testval);
	return 0;
}

void newval(float *num)
{
	printf("\nFrom newval():The value pointed to by num is %5.2f\n",*num);
	*num=*num+20.2;    //把地址里的值加上20.2,放到指针所指向的变量地址里 
} 
