//sum of naturalNumber using do while loop;
#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	do
	{
		
		sum=sum+i;
		i++;	
	}while(i<=n);
	printf("sum=%d\n",sum);
	return 0;
}