#include<stdio.h>
int main()
{
	int a=20, b=30;
	printf("The value of a and b before swaping a=%d, b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a and b after swaping a=%d, b=%d\n",a,b);
	return 0;
	
	
}