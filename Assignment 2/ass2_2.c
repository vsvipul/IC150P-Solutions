/* Vipul Sharma B17069 IC150P Assignment 2 Task 2 */

#include <stdio.h>
#include <math.h>

double dist(int x1, int y1, int x2, int y2)	// returns distance between two points using distance formula
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

double area(int x1, int y1, int x2, int y2, int x3, int y3) //returns area of triange using heroine formula
{
	double a, b, c, p;
	a = dist(x1,y1,x2,y2);
	b = dist(x1,y1,x3,y3);
	c = dist(x2,y2,x3,y3);
	p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
	int x1, x2, y1, y2, x3, y3;
	printf("Enter one vertex of triangle: ");		//first vertex
	scanf("%d%d", &x1, &y1);
	printf("Enter second vertex of triangle: ");	//second vertex
	scanf("%d%d", &x2, &y2);
	printf("Enter third vertex of triangle: ");		//third vertex
	scanf("%d%d", &x3, &y3);
	if (area(x1, y1, x2, y2, x3, y3)>0)
		printf("Area of triangle is: %.2lf\n ",area(x1, y1, x2, y2, x3, y3));
	else
		printf("A triangle can not be formed with given vertices.\n");		//all points lie on a straight line
	return 0;
}