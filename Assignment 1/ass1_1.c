/* Vipul Sharma B17069 IC150P Assignment 1 Task 1 */

#include <stdio.h>
#include <math.h>
#define c 12.5
#define g 9.81

int main()
{
	double res, m;
	double t;
	printf("Enter m in kgs: ");
	scanf("%lf", &m);
	printf("t(in s)\tv (in m/s)\n");	// \t for giving tabspace for creating column view
	for (t=0; t<=10; t++)
	{
		res = (m*g/c)*(1-exp(-c*t/m));
		printf("%.4f\t%.4lf\n", t, res);
	}
	return 0;
}