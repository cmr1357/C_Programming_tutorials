//Local Variables
#include<stdio.h>
//global variable initialization
int c=5;
int sum;
int main()
{
	//local variable declaration
	int a,b;
	//a and b are local variable to the main function.
	//initialization
	a=10;
	b=20;
	sum=a+b+c;
	printf("a= %d, b=%d,c= %d\n",a,b,c);
	printf("sum=%d\n",sum);
	return 0;
}