#include <stdio.h>

int main()
{
	int i,sum=0;
	int grade[]={10,20,30,40,50};
	int *p;
	p=grade;  //�� p=&grade[0] 
	for (i=0;i<5;i++)
	{
		sum=sum+*(p++);
	}
	/*��for (i=0;i<5;i++)
	{
		sum=sum+*(p+i); //���ﲻ��ֱ����*p�������ǽ���һ��ֵ����� 
	}*/
	printf("sum=%d\n",sum);
	return 0;
}
