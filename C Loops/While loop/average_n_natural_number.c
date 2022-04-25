#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	float average;
	printf("Enter the range\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	//average=(float)sum/n;no need
	printf ("Sum of numbers up to %d = %d \n",n,sum);
	//printf ("Average= %f \n",(float)sum/n);
	printf ("Average= %f \n",average);
	
	return 0;
}