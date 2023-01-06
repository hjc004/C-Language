#include <stdio.h>
#define SIZE 10
//function declaration
int LinearSearch(int data[],int numel,int key);
int main()
{
	int a[SIZE]={5,10,22,32,45,67,73,98,99,101};
	int item,location;
	printf("Please input the item you are searching for:");
	scanf("%d",&item);
	location=LinearSearch(a,SIZE,item);    //function coil
	if (location == -1)
	    printf("The item was not found in the array\n");
	else 
	    printf("The item was found in index %d\n",location);
	return 0;
}
//function definition
int LinearSearch(int data[],int numel,int key)
{
	for (int i = 0;i < numel;i++)
	{
		if (data[i]==key)
		{
			return i;
		}
	}
	return -1;
}
