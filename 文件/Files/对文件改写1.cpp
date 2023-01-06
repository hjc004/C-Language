/*对现有文件的内容进行改写*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	double nums[]={99,24,78,89,67,77};
	char *str[]={"aaaaaaaaa","hhhhh","uuuuuuu"};
	fp=fopen("prices.txt","w");
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	for (int i=0;i<3;i++)  //写入 
	{
		fprintf(fp,"%-9s%5.2lf\n",str[i],nums[i]);  //把nums[]与str[]中的内容写入三次 
	}
	fclose(fp);
	return 0;
}
