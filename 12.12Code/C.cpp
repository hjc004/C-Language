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
		if (str[i] != ch)  //把不等于ch的字符保留，用后面的替换掉前面要删除的字符 
		    str[j++]=str[i];
	}
	str[j]='\0';  //把后面多余的字符删掉 
}
