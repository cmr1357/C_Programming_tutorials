//Matrix subtraction
#include<stdio.h>

int main()
{
	//Initiazing 2D array
	int a[5][3]={{1,2,3},{4,5,6},{1,1,1},{2,2,3},{4,3,6}};
	int b[5][3]={{1,1,1},{4,4,6},{1,1,1},{2,0,3},{4,3,7}};
	
	int z[5][3];
	
	printf("\t\tMatrix Subtraction\n");
	printf("\t\t----------------\n");
	printf("\n");
	
	//Printing Matrix a	
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
	
	//Printing Matrix b
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
	
	//Substracting and printing the result
	printf("The resultant matrix is\n");
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<3;k++)
		
		{
			z[i][k]=a[i][k] - b[i][k];
			printf("%d\t",z[i][k]);
		}
		printf("\n");
	}
	return 0;
	
}
	
	
	