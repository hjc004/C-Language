#include <stdio.h>
#include <ctype.h>
void toUpper(char );

int main()
{
	char srcStr[300];
	gets(srcStr);
	toUpper(srcStr);
	puts(srcStr);
	return 0;
}

void toUpper(char srcStr[])
{
	int i;
	for (i = 0;i != '\0';i++)
	{
		srcStr[i]=toupper(srcStr[i]);
	}
}
