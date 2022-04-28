//Transpose of a matrix

#include<stdio.h>
#define MAX 100

int main()
{
	
	int a[MAX][MAX];
	int b[MAX][MAX];

	
	int arow,acol,brow,bcol;
	
	//Input row and column limit of a matrix
	printf("Enter the rows and columns of square matrix a:\n");
	scanf("%d%d",&arow,&acol);
	
	//Input Matrix A
	printf("Enter the elements of matrix a: \n");
	for(int i=0;i<arow;i++)
	{
		for(int j=0;j<acol;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	
	}
	
	printf("Matrix A\n");
	//computing the transpose of matrix a and printing matrix a
	for(int i=0;i<arow;i++)
	{
		for(int j=0;j<acol;j++)
		{
			printf("%d \t",a[i][j]);
			b[j][i]=a[i][j];
			
		}
	printf("\n");
	
	}
	
	//Printing the resultant matrix
	printf("The resultant matrix is : \n");
	for(int i=0;i<arow;i++)
	{
		for(int j=0;j<acol;j++)
		{
			printf("%d\t",b[i][j]);
			
			
		}	printf("\n");
	
	}
	
	
	return 0;
}