/* Vipul Sharma B17069 IC150P Assignment 1 Task 3 */

#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main()
{
	double area, s, a, b, c, aa, ab, ac;
	printf("Enter side a of triangle: ");
	scanf("%lf", &a);
	printf("Enter side b of triangle: ");
	scanf("%lf", &b);
	printf("Enter side c of triangle: ");
	scanf("%lf", &c);
	s = (a+b+c)/2;	// s=semiperimeter
	area = sqrt(s*(s-a)*(s-b)*(s-c));	//using heroine's formula
	aa = asin((2*area)/(b*c))*(180/PI);	//using sas formula
	ab = asin((2*area)/(a*c))*(180/PI);
	ac = asin((2*area)/(a*b))*(180/PI);
	printf("Entered sides were a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);
	printf("Area = %.4lf\n", area);
	printf("Angles are A = %.1lf, B = %.1lf, C = %.1lf\n", aa, ab, ac);
	return 0;
}