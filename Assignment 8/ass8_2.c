/* Vipul Sharma B17069 Assignment 8 Task 2*/
#include <stdio.h>

typedef struct 
{
	char name[25];
	long long int num,bal;
}user;

void xprintf(user arr[], int n)	//fxn to print details with balance less than 500
{
	int i;
	printf("\nCustomers with account balance less than 500 are-\n");
	for (i=0;i<n;i++)
	{
		if (arr[i].bal<500)
			printf("%s %lld\n",arr[i].name,arr[i].num);
	}
	printf("\n");
}

int check(int n, user arr[], long long int nu)	//checks for duplicate accounts
{
	int i;
	for (i=0;i<n-1;i++)
		if (arr[i].num==nu)
			return 1;
	return 0;
}

void fnc(user arr[], int n, long long int nu, long long int x, char c)	//transaction code
{
	int i;
	for (i=0;i<n;i++)
	{
		if (arr[i].num==nu)
		{
			if (c=='W'||c=='w')
			{
				if (arr[i].bal-x>=0)
				{
					arr[i].bal-=x;
					printf("Name\tAccNum\tBalance\n");
					printf("%s\t%lld\t%lld\n",arr[i].name,arr[i].num,arr[i].bal);
				}
				else
				{
					printf("Transaction can not be completed\n");
				}
			}
			else if (c=='D'||c=='d')
			{
				arr[i].bal+=x;
				printf("Name\tAccNum\tBalance\n");
				printf("%s\t%lld\t%lld\n",arr[i].name,arr[i].num,arr[i].bal);
			}
			break;
		}
	}
}

int main()
{
	int i,n;
	printf("Enter number of customers in bank.\n");
	scanf("%d",&n);
	user arr[n];
	printf("Enter details of users in format- \nname accnumber balance\n");
	for (i=0;i<n;i++)
	{
		scanf(" %s %lld%lld",arr[i].name,&arr[i].num,&arr[i].bal);
		if (check(i+1,arr,arr[i].num))
		{
			printf("Account number already exists. Please enter again\n");	//Duplicate case
			i--;
		}
	}
	xprintf(arr,n);
	long long int nu,amount;
	char c;
	while (1)
	{
		printf("Enter transaction in the given form- \nEnter 0 to exit\naccnum amount code\n");
		scanf("%lld",&nu);
		if (!nu)
			break;
		scanf("%lld %c",&amount,&c);
		fnc(arr,n,nu,amount,c);
	}
	return 0;
}