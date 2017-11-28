/* Vipul Sharma B17069 Assignment 8 Task 3*/
#include <stdio.h>
#define GT 1
#define GR 1
#define PI 3.14159
#define C 299792458
typedef struct
{
	double pt,f,d,pl,pr;
}sig;

void fncpl(sig arr[])	//finds pl
{
	int i;
	for (i=0;i<5;i++)
		arr[i].pl=((4*PI*arr[i].d*arr[i].f)/C)*((4*PI*arr[i].d*arr[i].f)/C);
}

void fncpr(sig arr[])	//find pr
{
	int i;
	for (i=0;i<5;i++)
		arr[i].pr=arr[i].pt*GT*GR/arr[i].pl;
}

void printpr(sig arr[])	//prints pr along with other inputs
{
	int i;
	printf("Pt(in W)\tf(in Hz)\td(in m)\t\tPl(in W)\tPr(in W)\n");
	for (i=0;i<5;i++)
		printf("%lf\t%lf\t%lf\t%lf\t%lf\n",arr[i].pt,arr[i].f,arr[i].d,arr[i].pl,arr[i].pr);
}

int main()
{
	int i;
	sig arr[5];
	printf("Enter 5 values of transmitted power in watts, frequency in Hz and distance in metres\n");
	for (i=0;i<5;i++)
		scanf("%lf%lf%lf",&arr[i].pt,&arr[i].f,&arr[i].d);
	fncpl(arr);
	fncpr(arr);
	printpr(arr);
	return 0;
}
