#include <stdio.h>
int findMax(int a,int b,int c);    //����������,�βο��Բ�д������ֻҪ�ж����ʽ���� 
int main()
{
	int a,b,c;                     
	int maxNum;
	printf("Please input a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	maxNum=findMax(a,b,c);         //�����ĵ���    ִ�е���9��ʱ������14��ִ�У�ִ�����ٷ��ص�9�� 
	printf("The max valuue is %d\n",maxNum);                  
	return 0;
}
//�����Ķ���
int findMax(int a,int b,int c)    //�����a,b,c��������޹� 
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
	return max;     //����ֵ����������֪�� 
} 
