#include <stdio.h>
#include <string.h>
void rremove(char str[],char ch);

int main()
{
	char str[100];
    char ch;
    gets(str);
    ch = getchar();
    rremove(str,ch);
    puts(str);
}

void rremove(char str[],char ch)
{
	int i,j;
	for (i = 0,j = 0;str[i] != '\0';i++)
	{
		if (str[i] != ch)  //�Ѳ�����ch���ַ��������ú�����滻��ǰ��Ҫɾ�����ַ� 
		    str[j++]=str[i];
	}
	str[j]='\0';  //�Ѻ��������ַ�ɾ�� 
}
