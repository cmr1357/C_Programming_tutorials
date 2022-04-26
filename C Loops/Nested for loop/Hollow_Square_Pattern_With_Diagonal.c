//HollowSquarePattern with Diagonal
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1|| j==n||i==1||i==n||j==i||j==(n-i+1))
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}