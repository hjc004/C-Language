#include <stdio.h>
int main()
{
    int a[7]={1,3,-11,20,4,6,100};   
	/*定义一个整形数组，叫a。7是数组的长度，长度最好跟个数持平，可以超一点 */
	int sum=0;
	int i;
	for(i=0;i<7;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	printf("第3个元素的值是%d\n",a[2]);  //这里的2表示第三个位置（第一个为第0位） 
	return 0;
}
