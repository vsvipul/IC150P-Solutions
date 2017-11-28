/* Vipul Sharma B17069 IC150P Assignment 2 Bonus 2*/
#include <stdio.h>

double fncser(double res, double r)
{
	return res+r;
}

double fncpar(double res, double r)
{
	return res+(1/r);
}

int main()
{
	int i,n;
	double r,res=0;
	char ch;
	printf("Enter number of resistors: ");			//number of resistors
	scanf("%d",&n);	
	printf("Enter type of resistance s for series p for parallel: ");	// take s for series p for parallel
	scanf(" %c",&ch);
	if (ch=='s')
	{
		for (i=1;i<=n;i++)
		{
			printf("Enter %dth resistance in ohms: ",i);
			scanf("%lf",&r);
			res=fncser(res,r);												//add resistances in series
		}
		printf("Resistance is %.2lf ohms\n",res);
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			printf("Enter %dth resistance in ohms: ",i);
			scanf("%lf",&r);
			res=fncpar(res,r);											//add inverse of resistance in parallel
		}
		printf("Resistance is %.2lf ohms\n",1/res);					// print inverse of res in parallel
	}
	return 0;
}