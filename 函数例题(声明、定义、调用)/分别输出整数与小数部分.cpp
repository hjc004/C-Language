/*�ֱ�����������ֺ�С������*/
#include <stdio.h>
int whole(double a);
double fracpart(double a);

int main()
{
	double a;
	while (scanf("%lf",&a)!=EOF)
	{
		//whole(a);             �������������ø�ʽ�Ǵ���ģ�Ҫô����������շ���ֵ��Ҫô������ 
		//fracpart(a);           ֱ�ӷ���printf()������� (���߰Ѻ����������͸�Ϊvoid)
		printf("��������=%d,С������=%.2lf\n",whole(a),fracpart(a));
	}
}

int whole(double a)   //��Ϊ���ﶨ��������ͣ�����ֱ�ӷ��ؾ��ܵõ���������
{ 
	return a; 
}

double fracpart(double a)
{
	double fracpart;
	fracpart=a-whole(a);  //���������whole(a)�ٵ���һ�Σ�Ҳ������(int)aǿ��ת��Ϊ���� 
	return fracpart;      //�����˺����ǿ���������λ�ý��е��õ� 
}
