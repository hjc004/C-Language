#include <stdio.h>
int isLeapYear(int a);
int main()
{
	int a,b,c;
	int d=0;
	scanf("%d%d",&a,&b);
	for (;a <= b;a++)
	{
		c=isLeapYear(a);
		if (c == 1)
		{
			printf("%7d",a);
			d++;
			if (d%10 == 0)
			    printf("\n");
		}
	}
	return 0;
}

int isLeapYear(int a)
{
	if (a%100 == 0)
	{
		if(a%400 == 0)
		    return 1;
		else
		    return 0;
	}
	if (a%4==0)
	    return 1;
	else
	    return 0;
}
