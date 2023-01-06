#include <stdio.h>

int main()
{
	int i,sum=0;
	int grade[]={10,20,30,40,50};
	int *p;
	p=grade;  //或 p=&grade[0] 
	for (i=0;i<5;i++)
	{
		sum=sum+*(p++);
	}
	/*或for (i=0;i<5;i++)
	{
		sum=sum+*(p+i); //这里不能直接用*p，否则是将第一个值加五次 
	}*/
	printf("sum=%d\n",sum);
	return 0;
}
