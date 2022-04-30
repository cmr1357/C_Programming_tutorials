//Call a function
#include<stdio.h>
void hello();//A function declaration tells the compiler about a function name and how to call the function

int main()
{
	printf("First Call\n");
	hello();//Calling a Function
	printf("Second call\n");
	hello();//Calling a Function
	printf("Third call\n");
	return 0;
}
hello()//Defining a Function
{
	printf("Hello how are you\n");
}