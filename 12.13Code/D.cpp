#include<stdio.h>
void input(int *arr,int n);
void max_min(int *arr,int n);
void output(int *arr,int n);

int main()
{ 
    int a[10];
    input(a,10);
    max_min(a,10);
    output(a,10);
    return 0;
}

void input(int *arr,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void max_min(int *arr,int n)
{
	int max,min,n1,n2,temp1,temp2;
	int i,j;
	min=arr[0];
	for (i = 0;i < n;i++)
	{
		if (arr[i] < min)
		    min=arr[i];
		    n1=i;
	}
	max=arr[n-1];
	for (j = 0;j < n;j++)
	{
		if (arr[j] > max)
		    max=arr[j];
		    n2=j;
	}
	//temp1=arr[0];
	//arr[0]=min;
	//arr[n1]=temp1;
	temp2=arr[n-1];
	arr[n-1]=max;
	arr[n2]=temp2;
}

void output(int *arr,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf(" %d ",arr[i]);
	}
}
