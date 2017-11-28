/* Vipul Sharma B17069 Assignment 4 Bonus */
#include <stdio.h>
#include <math.h>

void velcal(double vel[], double arr[], double t)
{
	int i;
	for (i=0;i<5;i++)
		vel[i]=((arr[i]*9.81)/12.5)*(1-exp((-12.5*t)/arr[i]));
}

void momecal(double arr[], double vel[], double mome[])
{
	int i;
	for (i=0;i<5;i++)
		mome[i]=arr[i]*vel[i];			//momemtum=mass*velocity
}

int main()
{
	int i;
	double arr[5];
	printf("Enter 5 values of m in kgs\n");
	for (i=0;i<5;i++)
		scanf("%lf",&arr[i]);
	double vel[5],mome[5];
	printf("Enter time instant t is s : ");
	double t;
	scanf("%lf",&t);
	velcal(vel,arr,t);					//first function
	momecal(arr,vel,mome);				//second function
	printf("Mass(in kgs)\tVelocity(in m/s)\tMomentum(in Kg m/s)\n");
	for (i=0;i<5;i++)
		printf("%lf\t%lf\t\t%lf\n",arr[i],vel[i],mome[i]);
	return 0;
}