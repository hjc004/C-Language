#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *infile;
	infile=fopen("prices.txt","r");
	if (infile!=NULL)
	{
		printf("The file is not opened!\n");
		exit(1);  //�����˳�Ϊ0��������Ϊ��0 
	}
	printf("The file is opened!\n");
	return 0;
}
