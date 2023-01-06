#include <stdio.h>
void fun(int *a,int *b);

int main()

{
	int a,b;
	scanf("a=%d,b=%d",&a,&b);
	fun(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}

void fun(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
