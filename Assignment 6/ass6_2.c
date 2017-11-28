/* Vipul Sharma B17069 Assignment 6 Task 2*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int min(int a, int b)			//return min of two integers a and b
{
	if (a>b)
		return b;
	return a;
}

void swap(char* a, char* b)		//function to swap two strings
{
	char* tmp=(char*) malloc(1000*sizeof(char));
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
	free(tmp);
}

int main()
{
	int i,j,arr[3];
	char seq[3][1000],ano[3][1000];
	for (i=0;i<3;i++)
	{
	 	strcpy(seq[i],"");
	 	strcpy(ano[i],"");
	 	arr[i]=0;
	}
	char tmp[1000];
	//FILE HANDLING START
	FILE* f=fopen("protein.faa","r");
	i=0;j=0;
	while (fgets(tmp,1000,f))
	{
		if (tmp[0]=='>')
		{
			strcpy(ano[i],tmp);
			i++;
		}
		else
		{
			int ln=strlen(tmp)-1;
			if (tmp[ln]=='\n')
				tmp[ln]='\0';
			strcpy(seq[j],tmp);
			fgets(tmp,1000,f);
			ln=strlen(tmp)-1;
			if (tmp[ln]=='\n')
				tmp[ln]='\0';
			strcat(seq[j],tmp);
			j++;
		}
	}
	fclose(f);
	//FILE HANDLING END
	for (i=0;i<3;i++)
	{
		ano[i][0]=' ';
		arr[i]=strlen(seq[i]);
	}
	//SORTING STARTS
	int te,minlen=min(arr[0],min(arr[1],arr[2]));
	if (arr[1]==minlen)
	{
		te=arr[1];
		arr[1]=arr[0];
		arr[0]=te;
		swap(ano[0],ano[1]);
		swap(seq[0],seq[1]);
	}
	else if (arr[2]==minlen)
	{
		te=arr[2];
		arr[2]=arr[0];
		arr[0]=te;
		swap(ano[0],ano[2]);
		swap(seq[0],seq[2]);
	}
	for (i=0;i<3;i++)
		arr[i]-=2;
	if (arr[1]>arr[2])
	{
		te=arr[1];
		arr[1]=arr[2];
		arr[2]=te;
		swap(ano[2],ano[1]);
		swap(seq[2],seq[1]);
	}
	// SORTING ENDS
	printf("\nLength \t Annotation\n");
	for (i=0;i<3;i++)
		printf("%d\t%s",arr[i],ano[i]);
	printf("\n\n");
	//SEARCHING STARTS
	char sear[]="VTEVGIFTPKAVGR";
	for (i=0;i<3;i++)
	{
		if (strstr(seq[i],sear)!=NULL)
			printf("Pattern found at index %d to %d of annotaion %s\n",(int) (strstr(seq[i],sear)-seq[i]),(int) (strstr(seq[i],sear)-seq[i]+strlen("VTEVGIFTPKAVGR")-1),ano[i]);
	}
	printf("\n");
	//SEARCHING ENDS
	return 0;
}