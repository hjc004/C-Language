/*读出文件内容*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char str[20];
	double nums;
	fp=fopen("prices.txt","r");
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	while (fscanf(fp,"%s %lf",str,&nums) != EOF)  //把从fp中读出的内容写到str与nums两个变量中 
	    printf("%-9s %5.2lf\n",str,nums);
	return 0;
}
