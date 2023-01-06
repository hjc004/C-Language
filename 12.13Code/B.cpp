#include <stdio.h>
#include <string.h>
#define MAXS 80
int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) 
	    printf("wrong input!\n");
    else 
	    printf("%d\n", n);
    return 0;
}

int getindex( char *s )
{
	char day[MAXS][MAXS]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int i;
	for (i = 0;i <= 6;i++)
	{
		if (strcmp(s,day[i]) == 0)
			return i;
	}
	return -1;
}
