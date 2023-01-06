#include <stdio.h>
int main()
{
	int a[7];
	int sum=0;
	int i,j;
	for(j=0;j<7;j++)
	{
		scanf("%d",&a[j]);
	} 
	for(i=0;i<7;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	printf("第3个元素的值是%d\n",a[2]);  //这里的2表示第三个位置（第一个为第0位） 
	return 0;
}
