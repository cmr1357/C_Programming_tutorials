//Function call by value
#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("Before swap, value of a : %d\n",a);
	printf("Before swap , value of b : %d\n",b);
	
	swap(a,b);
	
	printf("After swap, value of a : %d\n",a);
	printf("After swap, value of b : %d\n",b);
	
	return 0;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	return ;
}