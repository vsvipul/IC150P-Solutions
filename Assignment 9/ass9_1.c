/* Vipul Sharma B17069 IC150P Assignment 9 Task 1 */
#include <stdio.h>
#include <stdlib.h>

double fnc(int n, double h, double* y)  //returns area of river cross section
{
	double area=y[0]+y[n-1];
	int i;
	for (i=1;i<n-1;i++)
		area+=2*y[i];
	area*=(h/2);
	return area;
}

int main()
{
	int n,i;
	double h;
	FILE* f=fopen("depth.txt","r");
	if (f==NULL)			//if file is not available
	{
		printf("File depth.txt does not exist.\n");
		return 0;
	}
	fscanf(f,"%d%lf",&n,&h);
	double* y=(double*)malloc(n*sizeof(double)); //dynamically created array
	for (i=0;i<n;i++)
		fscanf(f,"%lf",&y[i]);
	fclose(f);
	double area=fnc(n,h,y);
	fprintf(stdout,"Area of river cross section= %lf m^2\n",area); //printing with fprintf
	return 0;
}