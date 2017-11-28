/* Vipul Sharma B17069 Assignment 5 Task 1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,ind;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	int* arr;
	arr=(int*) malloc(n*sizeof(int));
	printf("Enter array elements: \n");
	for (i=0;i<n;i++)
		scanf("%d",arr+i);
	printf("Enter any index of array: ");
	scanf("%d",&ind);
	if (ind>n-1)					//index can not be greater than array size
	{
		while (ind>n-1)
		{
			printf("Please enter index from 0 to n-1\n");
			scanf("%d",&ind);
		}
	}
	printf("Old array is :\n");
	for (i=0;i<n;i++)				//prints the previous array without any changes
		printf("%d ",*(arr+i));
	printf("\n");
	int valsub=*(arr+ind);			//val from which each array index is subtracted
	printf("New array is :\n");
	for (i=0;i<n;i++)
	{
		*(arr+i)=valsub-(*(arr+i));
		printf("%d ",*(arr+i));
	}
	printf("\n");
	free(arr);
	return 0;
}