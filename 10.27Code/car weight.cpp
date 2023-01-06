#include <stdio.h>
int main()
{
	int year,level;
	double weight,money;
	scanf("%d%lf",&year,&weight);
	if (year<=1970)
	{
		if (weight<2700)
		    printf("%d %.2lf\n",level=1,money=16.50);
		else if (weight>=2700 && weight<=3800)
		    printf("%d %.2lf\n",level=2,money=25.50);
		else if (weight>3800)
		    printf("%d %.2lf\n",level=3,money=46.50);
	}
	else if (year>=1971 && year<=1979)
	{
		if (weight<2700)
		    printf("%d %.2lf\n",level=4,money=27.00);
		else if (weight>=2700 && weight<=3800)
		    printf("%d %.2lf\n",level=5,money=30.50);
		else if (weight>3800)
		    printf("%d %.2lf\n",level=6,money=52.50);
	}
	else if (year>=1980)
	{
		if (weight<3500)
		    printf("%d %.2lf\n",level=7,money=35.50);
		else if (weight>=3500)
		    printf("%d %.2lf\n",level=8,money=65.50);
	}
	return 0;
}
