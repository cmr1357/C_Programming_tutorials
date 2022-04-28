//Program to initialize and print 2D array
#include<stdio.h>

int main()
{
	int i,k;
	
	//Initialize 2D array of 5 rows and 3 columns
	int a[5][3]={{1,2,3},{4,5,6},{1,1,1},{2,2,3},{4,3,6}};

	//Print 2D array
	printf("The 2D Matrix \n");
	printf("------------- \n");
	printf("\n");
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<3;k++)
		{
			printf("%d\t",a[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}