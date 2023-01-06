#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int i,j;
	printf("Please input a number (n):");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)    
	{
		for(j=-n;j<=n;j++) 
	    {
	    	if((abs(i)+abs(j)) == n)
	    	{
			   printf("*");
		    }
		    else
		       printf("*");
		}
		printf("\n");
	}
	return 0;
}
