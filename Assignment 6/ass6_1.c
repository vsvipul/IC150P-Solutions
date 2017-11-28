/* Vipul Sharma B17069 Assignment 6 Task 1*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define prom printf("b17069$ ");		//prompt
#define PI 3.141592

void help()			// prints help prompt
{
	printf("HELP COMMANDS: \n");
	printf("\nsin x1 x2 cos x1 x2 tan x1 x2 : this command finds the Sin, Cos, and Tan of two integers x1 and x2\n");
	printf("log10 x1 x2 exp X1 X2 : this command finds the Log10 and Exponential values of two integers x1 and x2.\n");
	printf("help : this command prints available commands and their syntax");
	printf("exit : used to exit the prompt\n\n");
}

void extract2nums(char str[], int i, int* t1, int* t2)		//extract 2 numbers from line according to value of i
{
	int x1=0,x2=0,f=0;
	if (str[i]=='-')										//for negative integers
	{
		f=1;
		i++;
	}
	while (str[i]!=' ')
	{
		x1=(x1*10)+(str[i]-'0');
		i++;
	}
	if (f==1)
		x1*=-1;
	f=0;i++;
	if (str[i]=='-')
	{
		f=1;
		i++;
	}
	while (str[i]!=' ')
	{
		x2=(x2*10)+(str[i]-'0');
		i++;
	}
	if (f==1) 
		x2*=-1;
	*t1=x1;*t2=x2;
}

void sct(char str[])			//sin cos tan function
{
	prom
	int t1,t2;
	extract2nums(str,4,&t1,&t2);
	double r1=(PI/180)*t1;
	double r2=(PI/180)*t2;
	printf("%lf %lf %lf %lf %lf %lf\n",sin(r1),sin(r2),cos(r1),cos(r2),tan(r1),tan(r2));
}

void le(char str[])			//log exp function
{
	prom
	int t1,t2;
	extract2nums(str,6,&t1,&t2);
	if (t1<=0 && t2<=0)
	{
		printf("log of negative numbers not defined\n");		//exception
		return;
	}
	printf("%lf %lf %lf %lf\n",log10(t1),log10(t2),exp(t1),exp(t2));
}

int main()
{
	char str[1000];
	while (1)
	{
		prom
		fgets(str,1000,stdin);
		if (strcmp(str,"exit\n")==0)			//used to exit prompt
			break;
		int i,space=0;
		for (i=0;i<strlen(str);i++)
			if (str[i]==' ')
				space++;
		if (strstr(str,"sin")!=NULL && strstr(str,"cos")!=NULL && strstr(str,"tan")!=NULL && space==8)
			sct(str);
		else if (strstr(str,"log10")!=NULL && strstr(str,"exp")!=NULL && space==5)
			le(str);
		else
			help();
	}
	return 0;
}