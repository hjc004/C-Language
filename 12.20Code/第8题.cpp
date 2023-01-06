/*有10个学生，每个学生的数据包括学号、姓名、3门课的成绩，
从键盘输入10个学生的数据，要求打印出3门课的总平均成绩，以及最高分的
学生的数据（包括学号、姓名、3门课成绩、平均分数）。利用结构体编程实现。*/
#include <stdio.h>

struct student
{
	int num;
	char name[100];
	float grade[3];
	float aver;
};

void input(struct student stu[]);
struct student max(struct student stu[]);
void print(struct student stu);

int main()
{
	struct student stu[10],*p=stu;
	input(p);
	print(max(p));
	return 0;
}

void input(struct student stu[])
{
	int i;
	for (i = 0;i < 10;i++)
	{
		scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
		stu[i].aver=(stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3.0;
	}
	for (i = 0;i < 10;i++)
	{
		printf("学号：%d\t姓名：%10s\t平均成绩：%5.2f\n",stu[i].num,stu[i].name,stu[i].aver);
	}
}

struct student max(struct student stu[])
{
	int i;
	int m=0;
	for (i =1;i < 10;i++)
	{
		if (stu[i].aver > stu[m].aver)
		    m = i;
	}
	return stu[m];
}

void print(struct student stu)
{
	printf("\n成绩最高的学生是：\n");
	printf("学号：%d\n姓名：%s\n三门课成绩：%f\t%f\t%f\n",stu.num,stu.name,stu.grade[0],stu.grade[1],stu.grade[2],stu.aver);
}
