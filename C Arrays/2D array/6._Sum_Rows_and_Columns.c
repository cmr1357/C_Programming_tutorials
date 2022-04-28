//Sum of rows and column of square matrix

#include<stdio.h>
#define MAX 100

int main()
{
	
	int a[MAX][MAX];
	int rsum[MAX];
	int csum[MAX];

	
	int arow,acol,brow,bcol;
	
	//Input the row and column limit of Matrix A
	printf("Enter the rows and columns of square matrix a:\n");
	scanf("%d%d",&arow,&acol);
	
	//Input elements of matrix A
	printf("Enter the elements of matrix a: \n");
	for(int i=0;i<arow;i++)
	{
		for(int j=0;j<acol;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	
	}
	
	//Printing matrix A and computing the sum of rows and sum of columns
	printf("The matrix is : \n");
	for(int i=0;i<arow;i++)
	{	rsum[i]=0;
		csum[i]=0;
		for(int j=0;j<acol;j++)
		{
			printf("%d \t",a[i][j]);
			rsum[i]=rsum[i]+a[i][j];
			csum[i]=csum[i]+a[j][i];
		}
		printf("\n");
	
	}
	
	//Printing sum of rows 
	printf("Sum of rows is : \n");
	for(int i=0;i<arow;i++)
	{
		
			printf("%d\t",rsum[i]);
			
			
	}	
	printf("\n");
	
	
	//Printing sum of columns
	printf("Sum of cols is : \n");
	for(int i=0;i<acol;i++)
	{
		
			printf("%d\t",csum[i]);
			
			
	}	
	printf("\n");
	
	return 0;
}