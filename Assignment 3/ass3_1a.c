/* Vipul Sharma B17069 Assignment 3 Task 1*/

#include <stdio.h>

int reve(int n, int res)
{
	if (n==0)
	{
		return res;
	}
	reve(n/10, 10*res+n%10);
}

int main()
{
	printf("Enter a number: ");
	int n;
	scanf("%d",&n);
	int rev=reve(n,0);
	printf("%d",rev);		// input from user
	if (n==rev)
		printf("Palindrome\n");
	else
		printf("Not Palidrome\n");
	return 0;
}