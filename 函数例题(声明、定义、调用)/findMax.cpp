#include <stdio.h>
int findMax(int a,int b,int c);    //函数的声明,形参可以不写变量，只要有定义格式就行 
int main()
{
	int a,b,c;                     
	int maxNum;
	printf("Please input a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	maxNum=findMax(a,b,c);         //函数的调用    执行到第9行时跳到第14行执行，执行完再返回第9行 
	printf("The max valuue is %d\n",maxNum);                  
	return 0;
}
//函数的定义
int findMax(int a,int b,int c)    //这里的a,b,c与上面的无关 
{
	int max;
	max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	return max;     //返回值：让主函数知道 
} 
