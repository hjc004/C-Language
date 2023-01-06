#include <stdio.h>
int main()
{
	int n=0,m=0,sum=0;
	scanf("%d%d",&n,&m);
	for (int i = n;i <= m;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}
