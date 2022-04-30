//C program to add two numbers using pointers
#include<stdio.h>
int main()
{
	int *p,*k,i=10,j=20,sum;
	p=&i;
	k=&j;
	
	sum= *p+*k;
	
	printf("Sum of two numbers using pointer=%d",sum);
	return 0;
}