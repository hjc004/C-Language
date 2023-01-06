/*2018.3 µÚNÌâ*/
#include <stdio.h>
int main()
{
	int num,count=0;
	scanf("%d",&num);
	do
	{
		printf("%d",num%10);
		num=num/10;
		count++;
	}while(num!=0);
	printf(" %d\n",count);
	return 0;
}
