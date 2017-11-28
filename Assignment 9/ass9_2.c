/* Vipul Sharma B17069 IC150P Assignment 9 Task 2 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countwords(FILE* f)	//returns total number of words in file
{
	int res=0;
	char tmp[100];
	while (fscanf(f," %s",tmp)!=EOF)
		res++;
	return res;
}

int countfreq(FILE* f, char sea[]) //returns frequency of string sea in file
{
	int res=0;
	char tmp[100];
	while (fscanf(f," %s",tmp)!=EOF)
	{
		if (tmp[strlen(tmp)-1]=='!'||tmp[strlen(tmp)-1]=='.'||tmp[strlen(tmp)-1]==',') //works for both buns! and buns
		{
			if (strcasecmp(tmp,sea)==0)
			{
				res++;
				continue;
			}
			tmp[strlen(tmp)-1]='\0';
		}
		if (strcasecmp(tmp,sea)==0) //casecmp for case insensitivity
			res++;
	}
	return res;
}

void storeresult(int n, int freq, char sea[])	//appends result to file
{
	FILE* f=fopen("poem.txt","a");
	fprintf(f,"No of words in file = %d\n",n);
	fprintf(stdout,"No of words in file = %d\n",n);
	fprintf(stdout,"No of instances of %s = %d\n",sea,freq);
	fprintf(f,"No of instances of %s = %d\n",sea,freq);
	fclose(f);
}

int main()
{
	FILE* f=fopen("poem.txt","r");
	if (f==NULL) // if file is not available
	{
		printf("File poem.txt does not exist.\n");
		return 0;
	}
	int n=countwords(f);
	fclose(f);
	char sea[100];
	printf("Enter the word to search in file: ");
	scanf(" %s",sea);
	f=fopen("poem.txt","r");
	int freq=countfreq(f,sea);
	fclose(f);
	storeresult(n,freq,sea);
	return 0;
}