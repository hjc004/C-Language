/*一个接一个字符进行输入*/
#include <stdio.h>
#define SIZE 100
void getcharacter(char []);    //声明可以把数组名省略掉 

int main()
{
	char message[SIZE];
	printf("Enter a string: ");
	getcharacter(message);    //调用函数进行输入 
	printf("The string just entered is: \n");
	puts(message);
	return 0;
}

void getcharacter(char s[])
{
	char c;
	int i=0;
	while(i < (SIZE-1) && (c=getchar()) != '\n')  //只要不敲回车就循环输入 
	{
		s[i]=c;
		i++;
	}
}
