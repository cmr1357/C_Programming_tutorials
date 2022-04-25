#include<stdio.h>

int main()
{
	int reverse=0,i,temp;
	printf("Enter the number\n");
	scanf("%d",&i);
	temp=i;
	
	while(i != 0)
	{
		reverse=reverse *10;
		reverse=reverse +(i%10);
		i=i/10;
	}
	if(reverse== temp)
	{
		printf("The number you entered is palindrome\n");
	}
	else
	{
		printf("The numbere you entered is not a palindrome\n");
	}
	return 0;
}