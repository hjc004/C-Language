/*统计输入几个字符*/
#include <stdio.h>
int countChar(char []);

int main()
{
	char words[100];
	int charNumber;
	puts("Please input any numbers of characters: ");
	gets(words);
	charNumber=countChar(words);
	printf("The characters number is %d.\n",charNumber);
	return 0;
}

int countChar(char list[])
{
	int count=0;
	int i;
	for (i=0;list[i] != '\0';i++)
	{
		count++;
	}
	return count;
}
