#include <stdio.h>
void converse(char sourceStr[200],char destStr[200]);

int main()
{
	char sourceStr[200],destStr[200];
	while (gets(sourceStr) != NULL)
	{
		converse(sourceStr,destStr);
	}
	return 0;
}

void converse(char sourceStr[200],char destStr[200])
{
	int i,j;
	int count = 0;
	for (i = 0;sourceStr[i] != '\0';i++)
	{
		count++;
	}
	i=count-1;
	for (j = 0;j < count;j++)
	{
		destStr[j]=sourceStr[i];
		i--;
	}
	for (i = 0;i < count;i++)
	{
		printf("%c",destStr[i]);
	}
	printf("\n");
}
