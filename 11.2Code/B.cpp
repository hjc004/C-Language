#include <stdio.h>
int main()
{
	int n,m;
	int i;
	scanf("%d%d",&n,&m);
	if (m%2==0)
	{
		for (i=1;i>0,i<n;i++)
		{
			if (i*2+(n-i)*4==m)
			    printf("%d %d\n",i,(n-i));
			else if (i*2+(n-i)*4!=m)
			    continue;
		}
	}
	else
	    printf("No answer\n");
	return 0;
}
