#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *f=fopen("temp1.txt","w");
	FILE *f2=fopen("temp2.txt","w");
	printf("Enter contents of file 1. Enter STOP to stop reading.\n");
	char tmp[100]="";
	while (strcmp(tmp,"STOP\n")!=0)
	{
		fprintf(f,"%s",tmp);
		fgets(tmp,100,stdin);
	}
	printf("Enter contents of file 2. Enter STOP to stop reading.\n");
	char tmp2[100]="";
	while (strcmp(tmp2,"STOP\n")!=0)
	{
		fprintf(f2,"%s",tmp2);
		fprintf(f,"%s",tmp2);
		fgets(tmp2,100,stdin);
	}
	fclose(f);
	fclose(f2);
	return 0;
}