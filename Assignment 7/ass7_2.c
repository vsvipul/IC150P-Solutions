/* Vipul Sharma B17069 Assignment 7 Task 2*/

#include <stdio.h>
#include <string.h>

void ssearch(int n, char arr[][1000], char str[])	//search function
{
	int i,f=0;
	for (i=0;i<n;i++)
	{
		if (strstr(arr[i],str)!=NULL)
		{
			f=1;
			printf("Key found in string %d at index %ld\n",i,strstr(arr[i],str)-arr[i]);
		}
	}
	if (!f)
		printf("Given key not found in any string.\n");
}

void ssort(char arr[][1000],int n)		//sorts the 2d array
{
	int i,j;
	char key[1000];
	for (i=1;i<n;i++)
	{
		strcpy(key,arr[i]);
		j=i-1;
		while (j>=0 && strcmp(arr[j],key)>0)
		{
			strcpy(arr[j+1],arr[j]);
			j--;
		}
		strcpy(arr[j+1],key);
	}
}

int main()
{
	int n,i;
	printf("Enter number of strings to input: ");
	scanf(" %d",&n);
	char arr[n][1000],str[1000];
	printf("Enter set of strings:\n");
	for (i=0;i<n;i++)
		scanf(" %[^\n]",arr[i]);
	printf("Enter string to be searched:\n");
	scanf(" %[^\n]",str);
	ssearch(n,arr,str);
	printf("Unsorted array:\n");
	for (i=0;i<n;i++)
		printf(" %s\n",arr[i]);
	ssort(arr,n);
	printf("Sorted array:\n");
	for (i=0;i<n;i++)
		printf(" %s\n",arr[i]);
	return 0;
}