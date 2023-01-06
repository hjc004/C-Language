/*指针就是可以储存变量的地址，本身没有类型*/
/*格式： 类型 *变量名 （*号表示指向）*/
/*单项值传递：实参的值传给形参 ； 
  单项址传递：将变量的地址传递给指针（比值传递更高效）*/ 
#include <stdio.h>

/*int main()
{
	int num;
	num=22;
	printf("num=%d\n",num);
	printf("The address of num is %p\n",&num);     //按十六进制输出一个地址 
	return 0;
}
*/

int main()
{
	int *milesAddr;
	int miles=22;
	
	milesAddr=&miles;    //把miles的地址赋给milesAddr，这一步一定要有，否则就是空指针 
	
	printf("The address stored in milesAddr is %u\n",milesAddr);   //%u输出无符号整数(unsigned) 
	printf("The value pointed to by milesAddr is %d\n",*milesAddr); //输出指针指向的值 
	
	*milesAddr=189;  //*代表指向地址中的值 
	printf("The value in miles is now %d\n",miles);  //对变量miles赋值，原来的值被覆盖，地址没变，值变了 
	
	return 0;
}
