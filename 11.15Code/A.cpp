#include <stdio.h>
#define SIZE 10
void fn(int nums[],int numels);

int main()
{
	int nums[SIZE];
	for (int i = 0;i<SIZE;i++)
	{
		scanf("%d",&nums[i]);
	}
	fn(nums,SIZE);
}

void fn(int nums[],int numels)
{
	int max=nums[0],min=nums[0];
	int i,k,l;
	for (i = 0;i<SIZE;i++)
	{
		if (nums[i] >= max)
		{
			max=nums[i];
			k=i+1;
		}
		if (nums[i]<=min)
	    {
	    	min=nums[i];
		    l=i+1;
		}
	}	
	printf("���ֵ������ĵ�%d��Ԫ��ֵ��%d��Сֵ�ǵ�%d��Ԫ��ֵ��%d\n",k,max,l,min);
}
