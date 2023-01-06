#include <stdio.h>

struct Employee
{
	char name[10];
	float basic,bonus,pay,realPay;
};

int main()
{
	struct Employee message[10];
	int N,i;
	while (scanf("%d",&N) != EOF)
	{
		for (i = 0;i < N;i++)
		{
			scanf("%s %f %f %f",&message[i].name,&message[i].basic,&message[i].bonus,&message[i].pay);
			message[i].realPay=message[i].basic+message[i].bonus-message[i].pay;
		}
		for (i = 0;i < N;i++)
		{
			printf("%s %.2f\n",message[i].name,message[i].realPay);
		}
	}
}
