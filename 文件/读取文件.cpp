#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *infile;
	infile=fopen("prices.txt","r");
	if (infile!=NULL)
	{
		printf("The file is not opened!\n");
		exit(1);  //正常退出为0，非正常为非0 
	}
	printf("The file is opened!\n");
	return 0;
}
