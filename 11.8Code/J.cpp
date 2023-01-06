#include <stdio.h>
int isPrime(int a);

int main()
{
	int a,b,c;
	int count=0;
	scanf("%d%d",&a,&b);
	for (;a <= b;a++)
	{
		c=isPrime(a);
		if (c == 1)
		{
			printf("%7d",a);
			count++;
			if (count%10 == 0)
			    printf("\n");
		}
	}
	return 0;
}

int isPrime(int a)
{
	if (a%1 == 0 && a%a == 0)
	    return 1;
	else
	    return 0;
}
