/*oj´ð°¸´íÎó*/
#include <stdio.h>
void Num(int a[],int numel);

int main()
{
	int a[20];
	int i,numel;
	scanf("%d",&numel);
	for (i = 0;i < numel;i++)
	{
		scanf("%d",&a[i]);
	}
	Num(a,numel);
	return 0;
}

void Num(int a[],int numel)
{
	int i,j;
	int count;
	for (i = 0;i < numel;i++)
	{
		count = 0;
		for (j = 0;j < numel;j++)
		{
			if (a[i] == a[j])
		        count++;
		}
		if (count > (numel/2))
	    {
	    	printf("%d\n",a[i]);
	    	break;
		}    
	}
	if (count < (numel/2) && count > 0)
	    printf("0\n");
}
