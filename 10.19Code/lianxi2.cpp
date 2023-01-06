#include <stdio.h>
int main()
{
	int n;
	int i,j;
	printf("Please input a number (n):");
	scanf("%d",&n);
	for(i=1;i<=n;i++)         //±»³ËÊý 
	{
		for(j=1;j<=i;j++)        //³ËÊý 
	    {
	    	printf("%d*%d=%d\t",i,j,i*j);
	    }	
	   printf("\n");
	}
	return 0;
}
