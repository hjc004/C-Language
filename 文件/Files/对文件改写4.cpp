/*在文件里添加新内容，并保留原有内容*/
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
