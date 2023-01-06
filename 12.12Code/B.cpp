#include <stdio.h>
#define MAXN 20
void strmcpy(char *t,int m,char *s);
void ReadString(char s[]);

int main()
{
	char t[MAXN],s[MAXN];
	int m;
	scanf("%d\n",&m);
	ReadString(t);
	strmcpy(t,m,s);
	printf("%s\n",s);
	return 0;
}

void ReadString(char s[])
{
	gets(s);
}

void strmcpy(char *t,int m,char *s)
{
	int i,j;
	for (i = (m-1),j = 0;i < MAXN;i++)
	{
		s[j]=t[i];
		j++;
	}
}
