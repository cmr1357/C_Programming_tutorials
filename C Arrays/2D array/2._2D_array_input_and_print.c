//Program to input and print 2D array

#include<stdio.h>

int main()
{
	//declaring 5 X 2 (rows X columns) array
	int a[5][2];
	int i,k;
	
	//Input array elements
	printf("Enter the array elements \n");
	printf("\n");
	for( i=0;i<5;i++)
	{
		for( k=0;k<2;k++)
		{
			scanf("%d",&a[i][k]);
		}
	
	}
	
	printf("\n");
	
	//Print array elements
	for(i=0;i<5;i++)
	{
		for( k=0;k<2;k++)
		{
			printf("%d\t",a[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}