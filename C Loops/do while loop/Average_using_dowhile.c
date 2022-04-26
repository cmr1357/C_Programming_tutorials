//Average of naturalNumber using do while loop;
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
	printf("Average=%f\n",(float)sum/n);
	return 0;
}