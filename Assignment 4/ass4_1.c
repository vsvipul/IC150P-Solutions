/* Vipul Sharma B17069 Assignment 4 Task 1 */
#include <stdio.h>
#include <math.h>
double arr[100];

void input(int n)
{
	int i;
	printf("Enter array elements\n");
	for (i=0; i<n; i++)
		scanf("%lf", &arr[i]);
}

double geomean(int n)
{
	int i;
	double res=1;
	for (i=0;i<n;i++)
		res*=arr[i];
	return pow(res, 1/(double)n);
}

void echo(int n, double gm)
{
	int i;
	printf("Elements smaller than geometric mean %lf are:\n",gm);
	printf("Index\t\tAddress\t\t\tMagnitude\n");
	for (i=0;i<n;i++)
	{
		if (arr[i]<gm)				//acc to question
			printf("%d\t\t%p\t\t%lf\n",i,&arr[i],arr[i]);
	}
}

int main()
{
	int i, n;
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	input(n);				//first fxn
	double gm=geomean(n);	//second fxn
	echo(n,gm);				//third fxn
	return 0;
}