#include <stdio.h>
#include <stdlib.h>
int main()
{
	char response;
	FILE *infile;
	infile=fopen("prices.txt","r");  //只读方式访问文件 
	if (infile!=NULL)
	{
		printf("The file is opened!\n");
		printf("\nDo you want to continue and overwritted it?");
		printf("\n(y or n)");
		scanf("%c",&response);
		if (response=='n')
		{
			printf("\nThe file will not be overwritted.\n");
			exit(1);
		}
	}
	infile=fopen("prices.txt","w");  //改写方式访问文件 
	if (infile==NULL)
	{
		printf("\nThe file was not opened!");
		exit(1);
	}
	printf("\nThe file is opened!");
	return 0;
}
