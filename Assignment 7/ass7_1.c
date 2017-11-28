/* Vipul Sharma B17069 Assignment 7 Task 1*/

#include <stdio.h>

int inp(int r, int c, int arr[][c])		//function to input
{
	printf("Enter matrix elements:\n");
	int i,j,nz=0;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			if (!arr[i][j])
				nz++;
		}
	}
	return nz;
}

void sparse(int r, int c, int arr[][c], int nz)	//finds if sparse
{
	if (nz>0.5*r*c)
		printf("Sparse Matrix\n");
	else
		printf("Not a Sparse Matrix\n");
}

void printz(int r, int c, int arr[][c], int nz) //prints zeroes and addresses
{
	printf("Number of zeroes in matris is: %d\n",nz);
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (!arr[i][j])
			{
				printf("0 found at row %d column %d and address %p\n",i,j,&arr[i][j]);
			}
		}
	}
}

int main()
{
	int r,c;
	printf("Enter number of rows and columns in matrix: \n");
	scanf("%d%d",&r,&c);
	while (r<=0 || c<=0)
	{
		printf("Number of rows and columns can not be negative\n");
		scanf("%d%d",&r,&c);
	}
	int arr[r][c];
	int nz=inp(r,c,arr);
	sparse(r,c,arr,nz);
	printz(r,c,arr,nz);
	return 0;
}