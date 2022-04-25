//Reverse of a number
#include<stdio.h>
int main()
{	
	int num,reverse=0,temp;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(num != 0)
	{
		reverse=reverse *10;
		reverse= reverse + num%10;
		num=num/10;
		
	}
	printf("reverse of %d is %d \n",temp,reverse );
	return 0;
}



