/* Vipul Sharma B17069 Assignment 8 Task 1*/

#include <stdio.h>

typedef struct 
{
	double real,img;
}num;

void cadd(num a, num b)		//function to add 2 complex numbers
{
	num c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	if (c.img>=0)
		printf("The sum is %.2lf + %.2lfi\n",c.real,c.img);	
	else
		printf("The sum is %.2lf %.2lfi\n",c.real,c.img);	//prints negative imaginary part in correct format
}

void cmultiply(num a, num b)	//fxn to multiply 2 complex numbers
{
	num c;
	c.real=(a.real*b.real)-(a.img*b.img);
	c.img=(a.real*b.img)+(a.img*b.real);
	if (c.img>=0)
		printf("The product is %.2lf + %.2lfi\n",c.real,c.img);
	else
		printf("The product is %.2lf %.2lfi\n",c.real,c.img);	//prints negative imaginary part in correct format
}

int main()
{
	num a,b;
	printf("Enter real and imaginary part of first number.\n");
	scanf("%lf%lf",&a.real,&a.img);
	printf("Enter real and imaginary part of second number.\n");
	scanf("%lf%lf",&b.real,&b.img);
	cadd(a,b);
	cmultiply(a,b);
	return 0;
}