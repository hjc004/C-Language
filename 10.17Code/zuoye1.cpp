#include <stdio.h>
int main()
{
	int num;
	printf("Please input an interger(Not greater than 15): ");
	scanf("%d",&num);
	printf("%o,%x",num,num);
	return 0;
}
