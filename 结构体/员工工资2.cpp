/* 计算每个员工的工资：每小时工资*小时数 */
#include <stdio.h>

struct Employee   //结构体定义 
{
	int id;
	double PayRate;
	double hours;
};
double calc(struct Employee);  //函数声明 

int main()
{
	struct Employee emp={6787,8.93,40.5};  //emp是结构体类型的变量
	double netPay;
	netPay=calc(emp);      //函数调用 
	printf("The pay of employee %d is $%6.2f\n",emp.id,netPay);
	return 0;
}

double calc(struct Employee temp)
{
	return (temp.PayRate*temp.hours);
}
