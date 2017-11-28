/* Vipul Sharma B17069 IC150P Assignment 2 Task 1 */

#include <stdio.h>

double total(double a, double b, double c);
double percent(double a, double b, double c);

int main()
{
	double p1, p2, p3, p4, p5, m1, m2, m3, m4, m5, c1, c2, c3, c4, c5;
	char name[5][20];
	printf("\nEnter name of 1st student: ");		// Student 1
	scanf("%s", name[0]);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &p1);
	printf("Enter marks in chemistry out of 100: ");
	scanf("%lf", &c1);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &m1);

	printf("\nEnter name of 2nd student: ");		// Student 2
	scanf("%s", name[1]);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &p2);
	printf("Enter marks in chemistry out of 100: ");
	scanf("%lf", &c2);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &m2);	

	printf("\nEnter name of 3rd student: ");		// Student 3
	scanf("%s", name[2]);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &p3);
	printf("Enter marks in chemistry out of 100: ");
	scanf("%lf", &c3);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &m3);	

	printf("\nEnter name of 4th student: ");		// Student 4
	scanf("%s", name[3]);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &p4);
	printf("Enter marks in chemistry out of 100: ");
	scanf("%lf", &c4);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &m4);

	printf("\nEnter name of 5th student: ");		// Student 5
	scanf("%s", name[4]);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &p5);
	printf("Enter marks in chemistry out of 100: ");
	scanf("%lf", &c5);
	printf("Enter marks in physics out of 100: ");
	scanf("%lf", &m5);

	int i;
	printf("\nStudent Name\tPhysics\tMaths\tChemistry\tMarks Obtained\tMaximum Marks\tPercentage\n\n");
	
	printf("%s\t\t%.2lf\t%.2lf\t%.2lf\t\t%.2lf\t\t300\t\t%.2lf\n\n", name[0], p1, m1, c1, total(p1,c1,m1), percent(p1,c1,m1));
	printf("%s\t\t%.2lf\t%.2lf\t%.2lf\t\t%.2lf\t\t300\t\t%.2lf\n\n", name[1], p2, m2, c2, total(p2,c2,m2), percent(p2,c2,m2));
	printf("%s\t\t%.2lf\t%.2lf\t%.2lf\t\t%.2lf\t\t300\t\t%.2lf\n\n", name[2], p3, m3, c3, total(p3,c3,m3), percent(p3,c3,m3));
	printf("%s\t\t%.2lf\t%.2lf\t%.2lf\t\t%.2lf\t\t300\t\t%.2lf\n\n", name[3], p4, m4, c4, total(p4,c4,m4), percent(p4,c4,m4));
	printf("%s\t\t%.2lf\t%.2lf\t%.2lf\t\t%.2lf\t\t300\t\t%.2lf\n\n", name[4], p5, m5, c5, total(p5,c5,m5), percent(p5,c5,m5));		
	return 0;
}

double total(double a, double b, double c) // returns sum of 3 double values
{
	return a+b+c;
}

double percent(double a, double b, double c) // returns average of 3 double values
{
	return total(a,b,c)/3;
}