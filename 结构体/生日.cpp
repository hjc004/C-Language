#include <stdio.h>

struct Date     //一般把结构体放在主函数之外，使程序更清晰明了 
{
		int month;
		int day;
		int year;
};  

int main()
{
	struct Date birthday1,birthday2;  //在主函数中定义结构体变量,把month,day,year三个变量放在birthday里
	
	birthday1.month=10;
	birthday1.day=12;
	birthday1.year=2000;
	
	birthday2.month=2;
	birthday2.day=11;
	birthday2.year=2000;
	
	printf("My birthday is %d/%d/%d\n",birthday1.month,birthday1.day,birthday1.year);
	printf("My birthday is %d/%d/%d\n",birthday2.month,birthday2.day,birthday2.year);
	return 0;
}
