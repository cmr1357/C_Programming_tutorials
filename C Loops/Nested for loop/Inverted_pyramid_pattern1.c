//PATTERN
#include<stdio.h>
int main()
{
	int i,j,range;
	printf("Enter the range for the pattern\n");
	scanf("%d",&range);
	printf("\n");
	for(i=range;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}