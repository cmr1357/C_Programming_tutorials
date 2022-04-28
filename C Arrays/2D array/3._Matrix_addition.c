//Matrix Addition
#include<stdio.h>

int main()
{
	//Initializing 2D arrays
	int a[5][3]={{1,2,3},{4,5,6},{1,1,1},{2,2,3},{4,3,6}};
	int b[5][3]={{1,1,1},{4,4,6},{1,1,1},{2,0,3},{4,3,7}};
	
	int z[5][3];
	
	
	printf("\t\tMatrix Addition\n");
	printf("\t\t----------------\n");
	printf("\n");
	
	//Printing Matrix A
	printf("Matrix a\n");
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<3;k++)
		{
			printf("%d\t",a[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Printing Matrix B
	printf("Matrix b\n");
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<3;k++)
		{
			printf("%d\t",b[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Perform matrix addition and printing the result
	printf("The resultant matrix is\n");
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<3;k++)
		
		{
			z[i][k]=a[i][k] + b[i][k];
			printf("%d\t",z[i][k]);
		}
		printf("\n");
	}
	
	
	return 0;
}
	
	
	