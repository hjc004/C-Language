#include <stdio.h>
void CombineBySort(int Array1[],int Array1Num,int Array2[],int Array2Num,int pOutputArray[]);

int main()
{
	int Array1[100],Array2[100];
	int Array1Num,Array2Num;
	int pOutputArray[200];
	int pOutputArrayNum;
	int i;
	scanf("%d",&Array1Num);
	for (i=0;i < Array1Num;i++)
	{
		scanf("%d",&Array1[i]);
	}
	scanf("%d",&Array2Num);
	for (i=0;i < Array2Num;i++)
	{
		scanf("%d",&Array2[i]);
	}
	CombineBySort(Array1,Array1Num,Array2,Array2Num,pOutputArray);
	return 0;
}

void CombineBySort(int Array1[],int Array1Num,int Array2[],int Array2Num,int pOutputArray[])
{
	int pOutputArrayNum;
	pOutputArrayNum=Array1Num+Array2Num;
	int i,j;
	int temp;
	for (i = 0;i < pOutputArrayNum;i++)   //ºÏ²¢ 
	{
		//if ()
		if (i < Array1Num)
		{
			pOutputArray[i]=Array1[i];
		}
		if (i > Array1Num)
		{
			pOutputArray[i]=Array2[i-Array2Num];
		}
	}
	for (i = 0;i < (pOutputArrayNum-1);i++)    //ÉýÐòÅÅÐò 
	{
		for (j = 1;j < pOutputArrayNum;j++)
		{
			if (pOutputArray[j-1] > pOutputArray[j])
			{
				temp=pOutputArray[j];
				pOutputArray[j-1]=pOutputArray[j];
				pOutputArray[j]=temp;
			}
		}
	}
	for (i = 0;i < (pOutputArrayNum-1);i++)   //Êä³ö 
	{
		if (pOutputArray[i] != pOutputArray[i+1])
		    printf("%d ",pOutputArray[i]);
		else 
		    continue;
	}
}
