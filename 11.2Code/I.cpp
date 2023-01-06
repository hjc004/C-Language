#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j;
	char x=65;
	scanf("%d",&n); 
	for(i=-n;i<j;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if((abs(i)+abs(j))<=n)
			{
				printf("%c",x);
				x++;
			}
			else
				printf(".");
		}
		printf("\n");
	}
	return 0;
}

