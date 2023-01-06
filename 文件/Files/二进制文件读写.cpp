/*往二进制文件中写内容并显示在屏幕上*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("zhuhai.bin","wb"); //bin是二进制文件格式
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	for (int i=0;i<128;i++)  //写入ASCII码表128个字符 
	{
		fputc(i,fp);
	}
	fclose(fp);
	fp=fopen("zhuhai.bin","rb");
	while ((ch=fgetc(fp)) != EOF)  //读取文件 
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
