/*���ļ�����������ݣ�������ԭ������*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	fp=fopen("prices.txt","a");
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	gets(str);
	fputs(str,fp);
	fclose(fp);
	return 0;
}
