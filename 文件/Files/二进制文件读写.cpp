/*���������ļ���д���ݲ���ʾ����Ļ��*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("zhuhai.bin","wb"); //bin�Ƕ������ļ���ʽ
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	for (int i=0;i<128;i++)  //д��ASCII���128���ַ� 
	{
		fputc(i,fp);
	}
	fclose(fp);
	fp=fopen("zhuhai.bin","rb");
	while ((ch=fgetc(fp)) != EOF)  //��ȡ�ļ� 
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
