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
	printf("��3��Ԫ�ص�ֵ��%d\n",a[2]);  //�����2��ʾ������λ�ã���һ��Ϊ��0λ�� 
	return 0;
}
