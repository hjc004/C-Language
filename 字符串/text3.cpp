#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("Please input a single character: ");
	ch=getchar();
	if(isdigit(ch))
	    printf("The character just entered is digit.\n");
	else if(isalpha(ch))
	    printf("The character just entered is digit.\n");
	return 0;
}
