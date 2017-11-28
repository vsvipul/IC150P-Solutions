/* Vipul Sharma B17069 Assignment 3 Task 1*/

#include <stdio.h>
#include <string.h>

int fnc(char ch[], int n, int cur)
{
	if (cur>=n/2)		//base case
		return 1;
	if (ch[cur]==ch[n-cur-1])	
		fnc(ch,n,cur+1);
	else
		return 0;
}

int main()
{
	printf("Enter a number: ");
	char ch[1001];
	scanf("%s",ch);		// input from user
	if (fnc(ch,strlen(ch),0))
		printf("Palindrome\n");
	else
		printf("Not Palidrome\n");
	return 0;
}