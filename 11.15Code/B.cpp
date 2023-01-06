/*函数定义部分错误未改*/
#include <stdio.h>
void Num(int a[],int numel);

int main()
{
	int a[20];
	int i,numel;
	scanf("%d",&numel);
	for (i = 0;i <= (numel-1);i++)
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
		    if (i == j)
        	    continue;
        	else if (a[i] == a[j])
                count++;
        }
		if (count == 1)
		    printf("%d ",a[i]);
	}
} 
