/* Vipul Sharma B17069 IC150P Assignment 9 Task 3 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char name[30],roll[10],grade;
} student;

void bonusfnc()
{
	char tname[30],troll[10],tgrade;
	FILE* f=fopen("grades.txt","a");
	while(1)
	{
		printf("Enter record name to be inserted. Enter 0 to stop.\n");
		scanf(" %[^\n]",tname);
		if (strcmp(tname,"0")==0)
			break;
		printf("Enter record roll number to be inserted.\n");
		scanf(" %s",troll);
		printf("Enter record grade to be inserted. \n");
		scanf(" %c",&tgrade);
		fprintf(f,"\n%s, %s, %c",tname,troll,tgrade);
	}
	fclose(f);
}

int main()
{
	int n;
	bonusfnc(); 	//EXTRA
	printf("Enter number of records to read from file: ");
	scanf("%d",&n);
	student* arr=(student*)malloc(n*sizeof(student)); //dynamically created array of struct
	int i,j,k=0;
	FILE* f=fopen("grades.txt","r");
	if (f==NULL) //if file is not available
	{
		printf("File grades.txt does not exist.\n");
		return 0;
	}
	char tmp[100];
	while (k<n && fscanf(f," %[^\n]",tmp)!=EOF) //read line by line
	{
		i=0;j=0;
		while (tmp[i]!=',')
			arr[k].name[j++]=tmp[i++];
		i+=2;j=0;
		while (tmp[i]!=',')
			arr[k].roll[j++]=tmp[i++];
		i+=2;
			arr[k].grade=tmp[i];
		k++;
	}
	fclose(f);
	FILE *fo,*fa,*fb,*fc; //create 4 file for each grade
	fo=fopen("gradeo.txt","w");
	fa=fopen("gradea.txt","w");
	fb=fopen("gradeb.txt","w");
	fc=fopen("gradec.txt","w");
	for (i=0;i<n;i++)
	{
		printf("%s %s %c\n",arr[i].name, arr[i].roll, arr[i].grade);
		if (arr[i].grade=='O')
			fprintf(fo,"%s %s\n",arr[i].name,arr[i].roll);
		else if (arr[i].grade=='A')
			fprintf(fa,"%s %s\n",arr[i].name,arr[i].roll);
		else if (arr[i].grade=='B')
			fprintf(fb,"%s %s\n",arr[i].name,arr[i].roll);
		else
			fprintf(fc,"%s %s\n",arr[i].name,arr[i].roll);
	}
	fclose(fo);
	fclose(fa);
	fclose(fb);
	fclose(fc);
	return 0;
}