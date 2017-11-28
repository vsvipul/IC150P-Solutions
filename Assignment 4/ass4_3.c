/* Vipul Sharma B17069 Assignment 4 Task 3 */
#include <stdio.h>

void fnc(double p[], double x[], double l, int n, double* ra, double* rb)
{
	int i;
	double raa=0,rbb=0;
	for (i=0;i<n;i++)
	{
		rbb+=((p[i]*x[i])/l);
		raa+=(p[i]-(((p[i]*x[i])/l)));		//rai=pi-rbi
	}
	*ra=raa;
	*rb=rbb;
}

int main()
{
	double l;
	int i,n;
	printf("Enter length of beam in metres and number of point loads\n");
	scanf("%lf%d",&l,&n);
	double p[n],x[n];
	printf("Enter magnitude in Newtons with distance in metres of all point loads\n");
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf",&p[i],&x[i]);
		if (x[i]>l)			// distance of point load can not be greater than length
		{
			printf("Please enter again as dist of load can not be greater than length\n");
			i--;
		}
	}
	double ra,rb;
	fnc(p,x,l,n,&ra,&rb);
	printf("Reaction at a: %lf N\n",ra);
	printf("Reaction at b: %lf N\n",rb);
	return 0;
}