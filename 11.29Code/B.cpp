#include <stdio.h>
#include <string.h>
int length(char a[]);

int main()
{
	char a[200];
	gets(a);
	int i;
	for (i = 0;i < length(a);i++)
	{
		printf("%#x",a[i]);
	}
	printf("\n");
	return 0;
}

int length(char a[])
{
	int len;
	len=strlen(a);
	return len;
}
