/*��Сдת��*/
#include <stdio.h>
#include <ctype.h>
void convertToUpper(char []);

int main()
{
	char words[50];
	printf("Please enter astrings: ");
	gets(words);
	convertToUpper(words);
	printf("The coverted string is \n%s\n",words);
	return 0;
}

void convertToUpper(char s[])
{
	int i;
	for(i = 0;s[i] != '\0';i++)
	{
		s[i]=toupper(s[i]);    //ת���ɴ�д 
	}
}
