//variable preference
#include<stdio.h>
//global variable initialization
int c=5;
int sum;
int main()
{
	//local variable declaration
	int a,b,c;
	//a and b are local variable to the main function.
	//initialization
	a=10;
	b=20;
	c=100;
	//printf("sum = %d, sum");
	sum=a+b+c;
	printf("a= %d, b=%d,c= %d\n",a,b,c);
	printf("sum=%d\n",sum);
	return 0;
}