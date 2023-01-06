#include <stdio.h>
//int findMax(int [],int);
int findMax(int *,int);
int main()
{
	int nums[]={10,37,66,778,98};
	int max;
	max=findMax(nums,5);
	printf("The max value is %d\n",max);
	return 0;
}
/*(传统方法)int findMax(int vals[],int number)
{
	int i,max;
	max=vals[0];
	for (i=1;i<number;i++)
	{
		if (max<vals[i])
		    max=vals[i];
	}
	return max;
}*/
/*int findMax(int *vals,int number)
{
	int max,i;
	max=*(vals+0);
	for(i=1;i<number;i++)
	{
		if (max<*(vals+i))
		    max=*(vals+i);
	}
	return max;
}*/
int findMax(int *vals,int number)  //最好的方式就是这种，指针在动，而不是上面那种i在动 
{
	int max,i;
	max=*(vals+0);
	for(i=1;i<number;i++)
	{
		if (max<*vals)
		    max=*vals;
		    vals++;
	}
	return max;
}
