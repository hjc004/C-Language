/*���������ļ����ݲ�����*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("bnuz.txt","w"); //�ļ�����ֱ�Ӷ�д���������Զ��½���д�� 
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	ch=getchar();
	while (ch != '\n')
	{
		fputc(ch,fp);  //һ��д��һ���ַ� 
		ch=getchar();
	}
	fclose(fp);
	return 0;
}

