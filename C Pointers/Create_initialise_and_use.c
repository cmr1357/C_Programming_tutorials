// Create initialise and use pointers
#include<stdio.h>
int main()
{
	int i=10,*p;
	p=&i;
	printf("Value at i=%d\n",i);
	printf("Address of i =%u\n",&i);
	printf("Value at p=%d\n",p);
	printf("address at p=%d\n",&p);
	printf("Value pointed by p=%d\n",*p);
	
	return 0;
}