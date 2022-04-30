//variable preference
#include<stdio.h>
//global variable initialization
int c=5;
int sum(int , int);
int sum1;
int main()
{
	//Formal parameters or function parameters are treated as local variables
	int a,b,c;
	//a and b are local variable to the main function.
	//initialization
	a=10;
	b=20;
	c=100;
	sum1=a+b;
	printf("a= %d, b=%d,c= %d\n",a,b,c);
	printf("sum in main =%d\n",sum1);
	sum(10,5);
	return 0;
}
int sum(int a, int b)
{
	int sum1=a+b;
	printf("Value of a in sum() = %d\n",a);
	printf("Value of b in sum() = %d\n",b);
		printf("sum inside sum()=%d\n",sum1);
}