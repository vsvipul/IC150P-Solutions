/* Vipul Sharma B17069 Assignment 3 Task 3*/

#include <stdio.h>

int countdig(long long int n, int x)	
{
	if (n==0)
		return x;
	countdig(n/2,x+1);			// keep dividing by 2 and incrementing counter
}

int main()
{
	printf("Enter a +ve number: ");
	long long int n;
	scanf("%lld",&n);
	int res=countdig(n,0);
	if (res==0)			//0 requires 1 bit to store
		res++;
	printf("Number of bits required in binary: %d\n",res);
	return 0;
}