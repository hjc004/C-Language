#include <stdio.h>
#include <string.h>

int main()
{
	char string1[20]="Hello";
	char string2[20]="Hello BNUZ";
	int n1,n2;
	//字符串长度 
	n1=strlen(string1);
	n2=strlen(string2);
	printf("String1 length is %d,string2 length is %d.\n",n1,n2);
	
	//字符串比较,比较两个字符串是否相等
	int m;
	m=strcmp(string1,string2);
	if(m < 0)
	   printf("string1 is less than string2.\n");
	else if(m == 0)
	   printf("string1 is equal to string2.\n");
	else 
	   printf("string1 is greater than string2.\n");
	
	//字符串连接
	strcat(string1,string2);
	printf("After concatentation string1 is %s\n",string1);
	
	//字符串复制
	strcpy(string1,string2);
	printf("After copy string1 is %s\n",string1);
	printf("After copy string2 is %s\n",string2);
	return 0;
}
