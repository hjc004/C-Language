/*利用结构体数组计算每个学生的4门课程的平均分
并将学生的各科成绩及平均分分别输出文件score.txt中*/
#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
	int year;
	int 
}DATE;



int main()
{
	FILE *fp;
	int i,j,sum[30];
	STUDENT stu[30]={{1001,"Wang Gang",'M',{1991,5,19},{72,83,90,82}},
	                 {1002,"Li Ming",'M',{1992,8,20},{88,92,78,78}},
	                 {1003,"Wang Lihong",'F',{1991,9,19},{98,72,89,66}},
	                 {1004,"Chen Lili",'F',{1991,3,22},{87,95,78,90}}};
	if ((fp=fopen("score,txt","w")) == NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);   //!!!?
	}
	for (i=0;i<4;i++)
	{
		sum[i]=0;
		for (j=0;j<4;j++)
		{
			sum[i]=sum[i]+stu[i].score[j];
		}
		fprintf(fp,"%10ld%15s%3c%6d%02d%02d%4d%4d%4d%4d%6.1f\n",)
	}
	return 0;
}
