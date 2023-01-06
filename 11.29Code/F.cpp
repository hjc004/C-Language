#include <stdio.h>
#include <string.h>
void addChar(char str[50],char srcStr[200],int beginIndex,char destStr[250]);

int main()
{
	char str[50],srcStr[200],destStr[250];
    int beginIndex;
    int i,j;
    gets(str);
    gets(srcStr);
    scanf("%d",&beginIndex);
    for (i = 0;i < strlen(srcStr);i++)
    {
    	printf("%c",srcStr[i]);
    	if (i == (beginIndex-1))
    	{
    		for (j = 0;j < strlen(str);j++)
    		{
    			printf("%c",str[j]);
			}
		}
	}
	printf("\n");
	return 0;
}
