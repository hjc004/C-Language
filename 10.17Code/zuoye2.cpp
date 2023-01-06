#include <stdio.h>
int main()
{
	int x,y,n,p;
	float m;
	printf("Please input the sales weight(g): ");
	scanf("%d%d%d%d",&x,&y,&n,&p);
	m=x/500*2.5+y/500*1.7+n/500*2.0+p/500*1.2;
	printf("money=%f",m);
	return 0;
}
