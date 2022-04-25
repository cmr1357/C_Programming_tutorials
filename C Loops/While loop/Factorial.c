//Factorial of a number

#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Factorial of a number is 0\n");
		
	}
	else
	{
		while(num !=0)
		{
			fact=fact*num;
			num-=1;
			
		}
		printf("Factorial of a number is %d\n",fact);
	}
	
	
	
	return 0;
}