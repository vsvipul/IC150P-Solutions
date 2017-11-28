/* Vipul Sharma B17069 Assignment 3 Task 2*/

#include <stdio.h>

int hcf(int a, int b)		//hcf by long division
{
	if (b>a)
		return hcf(b,a);
	if (b==0)
		return a;
	return hcf(b,a%b);		
}

int lcm(int a, int b)
{
	return (a*b)/hcf(a,b);		//(a*b)=(hcf*lcm)
}

int main()
{
	printf("Enter two numbers:\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("hcf = %d\n",hcf(a,b));
	printf("lcm = %d\n",lcm(a,b));
	return 0;
}