/* Vipul Sharma B17069 IC150P Assignment 2 Bonus */
#include <stdio.h>
#include <math.h>
#define g 9.81

double calspeed(double d)
{
	return sqrt(g*d);
}

int main()
{
	double n;
	printf("Enter distance at which javelin is thrown in metres: ");
	scanf("%lf", &n);
	printf("Speed of javelin: %.2lf m/s\n", calspeed(n));
	return 0;
}