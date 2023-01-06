#include <stdio.h>
int countChar(char str[]);

int main()
{
	char str[200];
	int charNumber;
	gets(str);
	charNumber=countChar(str);
	printf("%d\n",charNumber);
	return 0;
}

int countChar(char str[])
{
	int i;
	int count = 0;
	for (i = 0;str[i] != '\0';i++)
	{
		count++;
	}
	return count;
}
