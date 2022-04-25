//Amstrong Number
#include<stdio.h>

int main()
{
	int i=0,dig,sum=0,num,temp;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num != 0)
	{
		i=i+1;
		num=num/10;
		
	}
	num=temp;
	while(num !=0)
	{
		dig=num%10;
		sum=(sum+pow(dig,i));
		num=num/10;
	}
	if (temp==sum)
	{
		printf("The number you enteered is Amstrong number\n");
	}
	else
	{
		printf("The number you entered is not an Amstrong number\n");
	}
	return 0;
}