#include<stdio.h>
int main()
{
	int n,i=1,r;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter a range");
	scanf("%d",&r);
	
	while (i<=r)
	{
		printf("%d * %d = %d \n ",n,i,n*i);
		i++;
	}
	return 0;
}