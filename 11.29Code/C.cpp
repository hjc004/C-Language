#include <stdio.h>

int main()
{
	char words[100];
	gets(words);
	int i;
	for (i = 0;words[i] != '\0';i++)
	{
		if (words[i] == ' ')
		    printf("\n");
	    else 
	        printf("%c",words[i]);
    }
    printf("\n");
	return 0;
}

