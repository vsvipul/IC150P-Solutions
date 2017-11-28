/* Vipul Sharma B17069 Assignment 7 Bonus*/

#include <stdio.h>

void transpose(int n, int arr[][n])	// prints transpose of input matrix
{
	printf("Transpose matrix is:\n");
	int i,j;
	for (j=0;j<n;j++)
	{
		for (i=0;i<n;i++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void lohitri(int n, int arr[][n])		//prints lower and upper triangular matrix
{
	int i,j;
	printf("Lower triangular matrix is: \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i>j)
				printf("%d ",arr[i][j]);
			else
				printf("- ");
		}
		printf("\n");
	}
	printf("Upper triangular matrix is: \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i<j)
				printf("%d ",arr[i][j]);
			else
				printf("- ");
		}
		printf("\n");
	}
}

int main()
{
	printf("Enter value of n for matrix: \n");
	int n,i,j;
	scanf("%d",&n);
	while (n<=0)		//n>0
	{
		printf("n can not be negative. Enter again.\n");
		scanf("%d",&n);
	}
	int arr[n][n],f=0;
	printf("Enter matrix elements:\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			if (i==j)			//conditions for identity matrix
			{
				if (arr[i][j]!=1)
					f=1;
			}
			else
			{
				if (arr[i][j]!=0)
					f=1;
			}
		}
	}
	if (!f)
		printf("Identity matrix\n");
	else
		printf("Not an identity matrix\n");
	transpose(n,arr);
	lohitri(n,arr);
	return 0;
}