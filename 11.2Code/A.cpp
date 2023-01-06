#include <stdio.h>
int main()
{
	int start,end;
	int count=0;
	scanf("%d%d",&start,&end);
	for(;start<=end;start++)
	{
		if(start%3==2 && start%5==3 && start%7==2)
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
