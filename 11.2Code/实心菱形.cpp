#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for (i = -n;i <= n;i++)   //³¤ 
	{
		for (j = -n;j <= n;j++)   //¿í 
		{
			if (abs(i)+abs(j) <= n)
			    printf("*");
			else
			    printf(".");
		}
		printf("\n");
	}
	return 0;
}
