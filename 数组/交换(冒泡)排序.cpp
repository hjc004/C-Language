#include <stdio.h>
#define SIZE 10
//function declaration
void BubbleSort(int data[],int numel);

int main()
{
	int a[SIZE]={22,5,67,98,45,32,101,99,78,10};
	BubbleSort(a,SIZE);    //function coil
    for (int i = 0;i < SIZE;i++)
        printf("%4d",a[i]);       //将排序后的数组一个个输出 
	return 0;
}
//function definition
void BubbleSort(int data[],int numel)
{
	int i,j;
	int temp;
	for (i = 0;i < (numel-1);i++)
	{
		for (j = i+1;j < numel;j++)
		{
			if (data[j-1] > data[j])
			{
				temp = data[j];
				data[j] = data[j-1];
				data[j-1] = temp;
			}
		}
	}
}
