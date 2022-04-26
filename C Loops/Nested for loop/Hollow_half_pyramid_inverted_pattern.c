//hollow square star pattern 
#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
		{
			if(i==1||i==num||j==num||j==i)
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