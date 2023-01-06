/*输出二维数组中的最大值以及对应行、列*/
#include <stdio.h>
#define ROWS 3
#define COLS 4
void display(int [ROWS][COLS]);
int main()
{
	int val[ROWS][COLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
	display(val);
	return 0;
}
void display(int nums[ROWS][COLS])
{
	int rowNum,colNum;
    int max;
    int m,n;
    for (rowNum = 0;rowNum < ROWS;rowNum++)
    {
    	for (colNum = 0;colNum < COLS;colNum++)
    	{
    		if (nums[rowNum][colNum] > max)
    		{
    			max=nums[rowNum][colNum];
    			m=rowNum;
    			n=colNum;
			}
		}
	}
	printf("%d %d %d\n",max,rowNum,colNum);
}
