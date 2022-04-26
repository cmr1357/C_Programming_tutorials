//PATTERN
#include<stdio.h>
int main()
{
	int i,j,range;
	printf("Enter the range for the pattern\n");
	scanf("%d",&range);
	printf("\n");
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}