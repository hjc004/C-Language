/*�����ļ�����*/
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
	while (fscanf(fp,"%s %lf",str,&nums) != EOF)  //�Ѵ�fp�ж���������д��str��nums���������� 
	    printf("%-9s %5.2lf\n",str,nums);
	return 0;
}
