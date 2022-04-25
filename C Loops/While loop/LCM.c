//LCM of a number

#include<stdio.h>

int main()
{
	int a,b,low,lcm;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	
	
	if(a>b)
	{
		low=a;
	}
	else
	{
		low=b;
	}
	
	
	while(1)
	{
		if(low%a == 0 && low%b ==0)
		{
			lcm=low;
			break;
		}
		low++;
	}
	printf("The LCM of %d and %d is %d \n",a,b,lcm);
	
	
	
	
}