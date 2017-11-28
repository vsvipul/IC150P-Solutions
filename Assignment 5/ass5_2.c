/* Vipul Sharma B17069 Assignment 5 Task 2 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char markstograde(int n, double mu, double sigma)		//return grade correspoding to marks
{
	if (n>=mu+2*sigma)
		return 'O';
	else if (n>=mu+sigma)
		return 'A';
	return 'B';
}

void fnc(int r, int c, int** arr, double vari[], double mea[])	//prints grade of every student
{
	int i,j;
	printf("\nGrade of all students in all 3 subjects are:\nStudents ");
	for (j=0;j<c;j++)
		printf("%d ",j+1);
	printf("\n");
	for (i=0;i<r;i++)
	{
		printf("Subject%d ",i+1);
		for (j=0;j<c;j++)
			printf("%c ",markstograde(*(*(arr+i)+j),mea[i],sqrt(vari[i])));
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int c,t,i,j,r=3;
	printf("Enter number of students in class: ");
	scanf("%d",&c);
	int** arr;
	arr=(int**)malloc(r*sizeof(int));
	for (i=0;i<r;i++)
	{
		*(arr+i)=(int*)malloc(c*sizeof(int));
	}
	double mea[3],vari[3],tmp;
	printf("Enter marks of all students in one subject followed by other subjects\n");
	for (i=0;i<r;i++)
	{
		tmp=0;
		for (j=0;j<c;j++)
		{
			scanf("%d",&t);
			*(*(arr+i)+j)=t;
			tmp+=t;
		}
		mea[i]=tmp/c;
	}
	for (i=0;i<r;i++)
	{
		tmp=0;
		for (j=0;j<c;j++)
		{
			tmp+=abs(*(*(arr+i)+j)-mea[i])*abs(*(*(arr+i)+j)-mea[i]);
		}
		vari[i]=tmp/c;
	}
	printf("Variance in the 3 subjects are: \n");
	for (i=0;i<r;i++)
		printf("%lf ",vari[i]);
	printf("\nAverage in the 3 subjects are: \n");
	for (i=0;i<r;i++)
		printf("%lf ",mea[i]);
	printf("\n");
	fnc(r,c,arr,vari,mea);
	return 0;
}