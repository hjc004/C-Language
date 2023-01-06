/*指针p = grade = &grade[0] */
/*       (数组名)  (数组元素)*/
/*把数组首元素地址赋给指针，该指针即代表整个数组*/
/*很多情况下，指针与数组名可以互换(当指针指向数组首地址时)*/
#include <stdio.h>
int main()
{
	int i;
	int *gPtr; 
	int grade[]={21,35,34,98,45};  //数组名代表首元素地址(首地址) 
	gPtr=&grade[0];
	for(i=0;i<5;i++)
	{
		printf("%d ",*(gPtr+i)); 
	}
	return 0;
}
