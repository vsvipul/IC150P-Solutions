/* Vipul Sharma B17069 IC150P Assignment 1 Task 2 */

#include <stdio.h>

int main()
{
	char ch;
	while (scanf(" %c", &ch)!=EOF)
	{
		if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))	//check for alphabet
		{	
			printf("It is an alphabet.\n");
			if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')	//check for vowel
				printf("It is a vowel.\n");
			else
				printf("It is a consonant.\n");		//if it isn't a vowel, it will be a consonant
		}
		else
			printf("Not an alphabet.\n");
	}
	return 0;
}