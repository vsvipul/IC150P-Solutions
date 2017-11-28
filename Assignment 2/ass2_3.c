/* Vipul Sharma B17069 IC150P Assignment 2 Task 3 */

#include <stdio.h>
#define PI 3.14159

double fnc(double dia, double dist)	//returns number of revolutions made by a ball of dia diameter when rolls dist distance
{
	return dist/(PI*dia);
}

int main()
{
	double dia, dist;
	printf("Enter diameter of soccer ball in metres: ");
	scanf("%lf", &dia);
	printf("Enter linear distance travelled by soccer ball in metres: ");
	scanf("%lf", &dist);
	printf("No. of revolutions: %.2lf\n", fnc(dia, dist) );
	return 0;
}