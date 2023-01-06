#include <stdio.h>
int main()
{
    char character;
    scanf("%c",&character);
    if(character>='A' && character<='Z')
    {
    	character=character+32;
    	printf("%c %d",character,character);
	}
	else if(character>='a' && character<='z')
	{
		character=character-32;
		printf("%c %d",character,character);
	}
	else
	    printf("%d",character);
	return 0;
}
