/*һ����һ���ַ���������*/
#include <stdio.h>
#define SIZE 100
void getcharacter(char []);    //�������԰�������ʡ�Ե� 

int main()
{
	char message[SIZE];
	printf("Enter a string: ");
	getcharacter(message);    //���ú����������� 
	printf("The string just entered is: \n");
	puts(message);
	return 0;
}

void getcharacter(char s[])
{
	char c;
	int i=0;
	while(i < (SIZE-1) && (c=getchar()) != '\n')  //ֻҪ���ûس���ѭ������ 
	{
		s[i]=c;
		i++;
	}
}
