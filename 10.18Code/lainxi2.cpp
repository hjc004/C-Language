#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b>=c)
	   printf("%d%d%d",a,b,c);
	else if(a>=c>=b)
	   printf("%d%d%d",a,c,b);
	else if(b>=a>=c)
	   printf("%d%d%d",b,a,c);
	else if(b>=c>=a)
	   printf("%d%d%d",b,c,a);
	else if(c>=a>=b)
	   printf("%d%d%d",c,a,b);
	else
	   printf("%d%d%d",c,b,a);
	return 0;
}
