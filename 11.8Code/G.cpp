#include <stdio.h>
int sumSquare(int a,int b);
int sumCube(int a,int b);
int main()
{
	int a,b;
	int i,j;
	scanf("%d%d",&a,&b);
	i=sumSquare(a,b);
	j=sumCube(a,b);
	printf("%d %d\n",i,j);
	return 0;
}
int sumSquare(int a,int b)
{
	int i;
	for (i=a;i<=b;i++)
	{
		if (a%2==0)
		{
			i=i+a*a;
		}
	}
	return i;
}
int sumCube(int a,int b)
{
	int j;
	for (j=a;j<=b;j++)
	{
		if (a%2==1)
		{
			j=j+a*a*a;
		}
	}
	return j;
}
