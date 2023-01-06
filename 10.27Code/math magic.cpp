#include <stdio.h>
int main()
{
	int a,b,c,d,x;
	scanf("%d",&x);
    a=x/1000;
    b=x/100-a*10;
    c=x/10-a*100-b*10;
    d=x-a*1000-b*100-c*10;
	printf("%d %d %d %d\n",a,b,c,d);
	printf("%d%d%d%d\n",d,c,b,a);
	return 0;
}
