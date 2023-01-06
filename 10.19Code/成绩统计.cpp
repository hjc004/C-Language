#include <stdio.h>
int main()
{
	int score;
	int good,pass,nopass;
	int i;
	good=0;
	pass=0;
	nopass=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&score);
		if(score>=0 && score<12)
		{
			good++;
		}
		else if(score>=12 && score<=15)
		{
			pass++;
		}
		else if(score>15)
		{
			nopass++;
		}
	}
	printf("%d »À\n",good);
	printf("%d »À\n",pass);
	printf("%d »À\n",nopass);
	return 0;
}
