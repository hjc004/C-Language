/*ָ����ǿ��Դ�������ĵ�ַ������û������*/
/*��ʽ�� ���� *������ ��*�ű�ʾָ��*/
/*����ֵ���ݣ�ʵ�ε�ֵ�����β� �� 
  ����ַ���ݣ��������ĵ�ַ���ݸ�ָ�루��ֵ���ݸ���Ч��*/ 
#include <stdio.h>

/*int main()
{
	int num;
	num=22;
	printf("num=%d\n",num);
	printf("The address of num is %p\n",&num);     //��ʮ���������һ����ַ 
	return 0;
}
*/

int main()
{
	int *milesAddr;
	int miles=22;
	
	milesAddr=&miles;    //��miles�ĵ�ַ����milesAddr����һ��һ��Ҫ�У�������ǿ�ָ�� 
	
	printf("The address stored in milesAddr is %u\n",milesAddr);   //%u����޷�������(unsigned) 
	printf("The value pointed to by milesAddr is %d\n",*milesAddr); //���ָ��ָ���ֵ 
	
	*milesAddr=189;  //*����ָ���ַ�е�ֵ 
	printf("The value in miles is now %d\n",miles);  //�Ա���miles��ֵ��ԭ����ֵ�����ǣ���ַû�䣬ֵ���� 
	
	return 0;
}
