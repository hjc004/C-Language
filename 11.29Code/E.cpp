#include <stdio.h>
void delChar(char sreStr[200],int num,int beginIndex,char destStr[200]);

int main()
{
	char sreStr[200],destStr[200];
	int num,beginIndex;
	gets(sreStr);
	scanf("%d",&num);
	scanf("%d",&beginIndex);
	delChar(sreStr,num,beginIndex,destStr);
	return 0;
}

void delChar(char sreStr[200],int num,int beginIndex,char destStr[200])
{
	int temp;
	int i,j;
	for (i = 0;i < (beginIndex-1);i++)
	{
		destStr[i]=sreStr[i];
	}
	for (j = (beginIndex-1);sreStr[j] != '\0';j++)
	{
		temp=sreStr[j+num];
		destStr[j]=temp;
	}
	printf("%s\n",destStr);
}
