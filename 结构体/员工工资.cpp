/* 统计员工工资 */
#include <stdio.h>

struct Employee 
{
	int id;
	char name[10];
	float salsary;
};

int main()
{
	struct Employee company[5]={{001,"dhdh",10.12},
	                            {002,"dvdfvd",774},
								{003,"hejdn",87},
								{004,"icnedc",98.55},
								{005,"ncowind",987}};
	for (int i=0;i<4;i++)
	    printf("%d %-10s %f\n",company[i].id,company[i].name,company[i].salsary); //-10表示name左对齐,占10个字符的长度 
	//在打.的时候会弹出选择框 
	return 0;
}
