#include <stdio.h>
int main()
{
    int a1,an,sum;
    int d=1;
    scanf("%d%d",a1,an);
    sum=((a1+an)*((an-a1)/d+1))/2;
    printf("%d\n",sum);
	return 0;
}

