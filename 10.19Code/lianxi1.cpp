#include <stdio.h>
int main()
{
	int start,end;
	int count=0;
	printf("Please input two numbers(start & end):");
	scanf("%d%d",&start,&end);
	for(start;start<=end;start++)
	{
		if(start%4==0 && start%5==0 && start%7==0)
		{
			printf("%d ",start);
			count++;
		}
		if(count==10)
		{
			count=0;
			printf("\n");
		}
	}
	return 0;
}
