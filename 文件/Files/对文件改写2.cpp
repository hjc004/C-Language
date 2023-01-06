/*任意输入文件内容并保存*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("bnuz.txt","w"); //文件存在直接读写，不存在自动新建再写入 
	if (fp==NULL)
	{
		printf("The file open failed!\n");
		exit(1);
	}
	ch=getchar();
	while (ch != '\n')
	{
		fputc(ch,fp);  //一次写入一个字符 
		ch=getchar();
	}
	fclose(fp);
	return 0;
}

