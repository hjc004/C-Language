/*统计单词个数*/
#include <stdio.h>
int countchar(char []);

int main()
{
	char words[100];
	int charNumber;
	puts("Please input any numbers of words: ");
	gets(words);
	charNumber=countchar(words);
	printf("The words number is %d.\n",charNumber);
	return 0;
}

int countchar(char list[])
{
	int count=0;
	int i;
	for (i=0;list[i] !='\0';i++)
	{
		if (list[i] == ' ')
		    count++;
	}
	return count+1;
}
