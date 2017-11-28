/* Vipul Sharma B17069 Assignment 7 Task 3*/

#include <stdio.h>

void inp(int n, int arr[][n])		//input function
{
	printf("Enter matrix elements:\n");
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

void lotri(int n, int arr[][n])		//prints lower triangular matrix
{
	int sum=0,i,j;
	printf("Lower triangular matrix is: \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i>j)
				printf("%d ",arr[i][j]);
			else
				printf("0 ");
			sum+=arr[i][j];
		}
		printf("\n");
	}
	printf("Sum of array elements: %d\n",sum);
}

void priarray(int n, int arr[][n])		//prints input array
{
	printf("The original matrix was: \n");
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("Enter value of n for matrix: ");
	scanf("%d",&n);
	int arr[n][n];
	inp(n,arr);
	priarray(n,arr);
	lotri(n,arr);
	return 0;
}