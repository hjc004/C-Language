#include <stdio.h>

struct student
{
	char id[10];
	char name[10];
	int grade1,grade2,grade3;
};

int main()
{
	struct student message[10];
	int N,i;
	int sum=0,max=0,k=0;
	while (scanf("%d",&N) != EOF)
	{
		for (i = 0;i < N;i++)  //数组本身就是地址，输入时不需要加入地址符 
		{
			scanf("%s%s%d%d%d",message[i].id,message[i].name,&message[i].grade1,&message[i].grade2,&message[i].grade3);
		    sum=message[i].grade1+message[i].grade2+message[i].grade3;
		    if ((message[i].grade1+message[i].grade2+message[i].grade3) > sum)
		        sum=message[i].grade1+message[i].grade2+message[i].grade3;
		        k=i;
		}
		printf("%s %s %d\n",message[k].name,message[k].id,sum);
	}
}
