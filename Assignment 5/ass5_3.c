/* Vipul Sharma B17069 Assignment 5 Task 3 */

#include <stdio.h>

int fnc(char* str)
{
	char* p=str;
	int res=0,i=0;
	while (*p!='\0')
	{
		// vowel check
		if ((*p=='a')||(*p=='e')||(*p=='i')||(*p=='o')||(*p=='u')||(*p=='U')||(*p=='O')||(*p=='I')||(*p=='E')||(*p=='A'))
		{
			printf("Vowel %c found at index %d and address %p\n",*p,i,p);
			res++;	//increase count
		}
		p++;i++;
	}
	return res;		//return count of vowels
}

int main()
{
	printf("Enter a string: \n");
	char str[10000];
	fgets(str,10000,stdin);		//string input
	int res=fnc(str);
	if (res==0)					//print string if 0 vowels found
		printf("0 vowels found in string\n%s",str);
	else
		printf("Number of Vowels = %d \n",res);
	return 0;
}