/*输出一个二维数组*/
#include <stdio.h>
#define ROWS 3
#define COLS 4
void display(int [ROWS][COLS]);     //ROWS：行，COLS：列 
int main()
{
	int val[ROWS][COLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
	display(val);
	return 0;
}
void display(int nums[ROWS][COLS])
{
	int rowNum,colNum;
	for (rowNum = 0;rowNum < ROWS;rowNum++)
	{
		for (colNum = 0;colNum < COLS;colNum++)
		    printf("%4d",nums[rowNum][colNum]);
		printf("\n"); 
	}
}
