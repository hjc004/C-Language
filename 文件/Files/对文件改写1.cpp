/*�������ļ������ݽ��и�д*/
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
	for (int i=0;i<3;i++)  //д�� 
	{
		fprintf(fp,"%-9s%5.2lf\n",str[i],nums[i]);  //��nums[]��str[]�е�����д������ 
	}
	fclose(fp);
	return 0;
}
