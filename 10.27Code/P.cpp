#include <stdio.h>
int main()
{
	int n,sum=0,i,op=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*op);
		op=op*(-1);
	}
	printf("%d\n",sum);
	return 0;
}
