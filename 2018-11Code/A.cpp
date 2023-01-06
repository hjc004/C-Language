#include <stdio.h>

struct student
{
	char id[6]; //实际上5个字符后面还有一个空字符，要给多一个位，否则会出错 
	char name[10];
	float grade;
};

int main()
{
	struct student message[10];
	int N,i,j;
	float sum=0,average=0;
	while (scanf("%d",&N) != EOF)
	{
		for (i = 0;i < N;i++)
		{
			scanf("%s %s %f",&message[i].id,&message[i].name,&message[i].grade);
		    sum=message[i].grade+sum;
		}
		average=sum/N;
		printf("%.2f\n",average);
		for (j = 0;j < N;j++)
		{
			if (message[j].grade <average)
			    printf("%s %s\n",message[j].name,message[j].id);
		}
	}
}
