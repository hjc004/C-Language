#include <stdio.h>
void num(int n,int *a,int *k);
int main()
{
	int a[100],n,k=0,i;
	scanf("%d",&n);
	num(n,a,&k);
	for(i=0;i<k;i++)
	    printf("%4d",a[i]);
}
void num(int n,int *a,int *k)
{
	int i;
	int count=0;
	for (i = 1;i < n;i++)
	{
		if (i%7 == 0 || i%11 == 0)
		    count++;
	}
}
