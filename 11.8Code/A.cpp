#include <stdio.h>
int findMax(int a,int b,int c);
int main()
{
	int a,b,c;
	int max;
	scanf("%d%d%d",&a,&b,&c);
	max=findMax(a,b,c);
	printf("%d\n",max);
	return 0;
}
int findMax(int a,int b,int c)
{
	int max;
	max=a;
	if (max<b)
	{
		max=b;
	}
	if (max<c)
	{
		max=c;
	}
	return max;
}
