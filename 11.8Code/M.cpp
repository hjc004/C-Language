#include <stdio.h>
int Prime(int p);
int PrimeSum(int m,int n);

int main()
{
	int p,m,n;
	int sum;
	scanf("%d%d",&m,&n);
	Prime(p);
	printf("%d",PrimeSum(m,n));
	return 0;
}

int Prime(int p)
{
	if (p>0)
	{
		if (p%1 == 0 && p%p == 0)
		    return 1;
		else
		    return 0;
	}
}
int PrimeSum(int m,int n)
{
	int sum;
	if (m>0)
	{
		for (;m<=n;m++)
		{
			if (m%1 == 0 && m%m == 0)
			    sum+=m;
			    return sum;
		}
	}
}
