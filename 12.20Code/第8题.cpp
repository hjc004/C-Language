/*��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ���
�Ӽ�������10��ѧ�������ݣ�Ҫ���ӡ��3�ſε���ƽ���ɼ����Լ���߷ֵ�
ѧ�������ݣ�����ѧ�š�������3�ſγɼ���ƽ�������������ýṹ����ʵ�֡�*/
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
		printf("ѧ�ţ�%d\t������%10s\tƽ���ɼ���%5.2f\n",stu[i].num,stu[i].name,stu[i].aver);
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
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%f\t%f\t%f\n",stu.num,stu.name,stu.grade[0],stu.grade[1],stu.grade[2],stu.aver);
}
