/* Vipul Sharma B17069 Assignment 4 Task 2 */
#include <stdio.h>
#include <math.h>

void sum(double a[], double b[], double c[], int n)
{
	int i;
	for (i=0;i<n;i++)
		c[i]=a[i]+b[i];
}

void sort(double arr[], int n)
{
	int i,j;
	double cur;
	for (i=1;i<n;i++)
	{
		j=i-1;
		cur=arr[i];
		while (j>=0 && arr[j]<cur)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=cur;
	}
}

int main()
{
	int n,i;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	double a[n],b[n],c[n];		// c is sum array
	printf("Enter array elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);		// a is input array
		b[i]=pow(2*i*i*i,.5);	// b is question array
	}
	sum(a,b,c,n);				//first fxn
	sort(c,n);					//second fxn
	printf("Resulting array is:\n");
	for (i=0;i<n;i++)
		printf("%lf ",c[i]);
	printf("\n");
	return 0;
}