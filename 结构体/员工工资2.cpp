/* ����ÿ��Ա���Ĺ��ʣ�ÿСʱ����*Сʱ�� */
#include <stdio.h>

struct Employee   //�ṹ�嶨�� 
{
	int id;
	double PayRate;
	double hours;
};
double calc(struct Employee);  //�������� 

int main()
{
	struct Employee emp={6787,8.93,40.5};  //emp�ǽṹ�����͵ı���
	double netPay;
	netPay=calc(emp);      //�������� 
	printf("The pay of employee %d is $%6.2f\n",emp.id,netPay);
	return 0;
}

double calc(struct Employee temp)
{
	return (temp.PayRate*temp.hours);
}
